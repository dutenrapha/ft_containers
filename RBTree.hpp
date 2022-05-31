/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RBTree.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:11:09 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/31 03:44:06 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RB_TREE_HPP
#define RB_TREE_HPP

#include "Tree.hpp"
#include <stdlib.h>
#include "pair.hpp"


namespace ft {
	
	#define SUPER Tree<K,V,KFromV,Cmp,Alloc>      									 
	template<class K, class V, class KFromV, class Cmp = std::less<K>, class Alloc = std::allocator<V> >
	class RBTree : public SUPER
	{
		public:
			typedef typename SUPER::iterator iterator;
			typedef typename SUPER::size_type size_type;
			typedef typename SUPER::Node Node;
			typedef typename SUPER::NodePtr NodePtr;
			typedef typename SUPER::ConstNodePtr ConstNodePtr;
			
		protected:
			enum Color {RED, BLACK};
			struct RBNode : public Node
			{
				Color col;
			};
			typedef typename Alloc::template rebind<RBNode>::other AllocRBNode;
			AllocRBNode allocRB;
			typedef typename AllocRBNode::pointer RBNodePtr;

			static Color getCol(ConstNodePtr r)
			{
				return RBNodePtr(r)->col;
			}

			static void setCol(NodePtr r, Color c)
			{
				RBNodePtr(r)->col = c;
			}

			static bool isBlack(ConstNodePtr r)
			{
				return getCol(r) == BLACK;
			}

			static bool isRed(ConstNodePtr r)
			{
				return getCol(r) == RED;
			}

			static bool isNullOrBlack(ConstNodePtr r)
			{
				return r==NULL || isBlack(r);
			}

			NodePtr &getRefNode(NodePtr p);

			void rotateRight(NodePtr p);

			void rotateLeft(NodePtr p);

			void adjustInsert(NodePtr p);

			void changeNodes(NodePtr a, NodePtr b);

			void rebalance(NodePtr parent, NodePtr r);

			void rebalanceLeft(NodePtr r);
			
			void rebalanceRight(NodePtr r);

			NodePtr newNode(NodePtr p, const V &e);

			NodePtr newNode(ConstNodePtr p);

			void deleteNode(NodePtr p);

			template <bool MULTI>
			pair<iterator, bool> insertNode(const V&);

			NodePtr insertLeft(NodePtr r, const V&);

			NodePtr insertRight(NodePtr r, const V&);

			NodePtr copy(ConstNodePtr x);

			void copy(const RBTree &x);

		//Public interface
		public:
	
			RBTree(const Cmp &c = Cmp(), const Alloc &a = Alloc()): SUPER(c,a) , allocRB(a){ }
			RBTree(const RBTree &x): SUPER(x.cmp, x.constr),allocRB(x.constr)
			{
				copy(x);
			}
			
			~RBTree()
			{
				this->clear();
			}

			RBTree &operator=(const RBTree &x);

			pair<iterator, bool> insertUni(const V &elemToInsert);

			iterator insertMulti(const V &elemToInsert);

			void clear(void);

			size_type erase(const K &keyToRem);

			void erase(iterator pos);
					
	};

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr &RBTree<K,V,KFromV,Cmp,Alloc>::getRefNode(NodePtr p)
	{
		NodePtr parent = p->parent;
		
		if (p == SUPER::root)
		{
			return this->root;
		}
		
		if (parent->left == p)
		{
			return parent->left;
		}
		else
		{
			return parent->right;	
		}
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::rotateRight(NodePtr m)
	{
		NodePtr &rp = getRefNode(m);
		rp = m->left;
		m->left = rp->right;                     
		rp->right  = m;
		if( m->left != NULL)
		{
			m->left->parent = m;
		}
		rp->parent = m->parent;
		m->parent = rp;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::rotateLeft(NodePtr n)
	{
		NodePtr &rp = getRefNode(n);
		rp = n->right;
		n->right = rp->left; 
		rp->left = n; 
		if(n->right != NULL)
		{
			n->right->parent = n;
		}
		rp->parent = n->parent;
		n->parent = rp;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::adjustInsert(NodePtr r)
	{
		if(r==SUPER::root)
		{
			setCol(r,BLACK);
			return;
		} 

		if(isBlack(r->parent))
		{
			return;   
		}
		
		NodePtr y = r->parent->parent;   
		NodePtr pr= y->right; 
		NodePtr	pl= y->left; 
		
		if(isNullOrBlack(pl) || isNullOrBlack(pr))
		{
			if(isNullOrBlack(pl))
			{          
				if(pr->left == r)
				{
					rotateRight(pr); 
				}
				rotateLeft(y);
			}
			else
			{                         
				if(pl->right == r)
				{
					rotateLeft(pl);
				}
				rotateRight(y);
			}
			setCol(y,RED);
			setCol(y->parent,BLACK);
		}
		else
		{                        
			setCol(pl,BLACK);
			setCol(pr,BLACK);
			if(y != SUPER::root) 
			{
				setCol(y,RED);
				adjustInsert(y);
			}
		} 
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::changeNodes(NodePtr x, NodePtr y)
	{
		NodePtr yp = y->parent;
		NodePtr xl = x->left;
		
		getRefNode(x) = y;
		y->parent = x->parent;
		x->left = y->left;
		if (x->left)
		{
			x->left->parent = x;
		}
		y->right = x->right;
		y->right->parent = y;
		if(xl != y)
		{
			yp->right = x;
			x->parent = yp;
		}
		else
		{
			xl = x;
		}
		y->left = xl; 
		xl->parent = y;
		x->right = NULL;
		Color c = getCol(x); 
		setCol(x,getCol(y)); 
		setCol(y,c);
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::rebalance(NodePtr parent, NodePtr r)
	{
		if (r == this->root)
		{
			return;
		}
		if (parent->left == r)
		{
			rebalanceLeft(parent);
		}
		else
		{
			rebalanceRight(parent);
		}
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::rebalanceLeft(NodePtr r)
	{
		NodePtr pr = r->right;

		if(isRed(pr))
		{
			rotateLeft(r);
			setCol(pr,BLACK);
			setCol(r,RED);
			pr = r->right;
		}
		if (isNullOrBlack(pr->right) && isNullOrBlack(pr->left))
		{
			setCol(pr,RED);
			if (isRed(r))
			{
				setCol(r,BLACK);
			}
			else
			{
				rebalance(r->parent, r);
			}
		}
		else
		{
			if (isNullOrBlack(pr->right))
			{  
				rotateRight(pr);
			}
			rotateLeft(r);                 
			setCol(r->parent, getCol(r));
			setCol(r->parent->right,BLACK);
			setCol(r,BLACK);
		}
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::rebalanceRight(NodePtr r)
	{
		NodePtr pl = r->left;

		if(isRed(pl))
		{
			rotateRight(r);
			setCol(pl,BLACK);
			setCol(r,RED);
			pl = r->left;
		}
		if(isNullOrBlack(pl->left) && isNullOrBlack(pl->right))
		{
			setCol(pl,RED);
			if (isRed(r))
			{
				setCol(r,BLACK);
			}
			else
			{
				rebalance(r->parent, r);
			}
		}
		else
		{
			if (isNullOrBlack(pl->left))
			{
				rotateLeft(pl);
			}
			rotateRight(r);
			setCol(r->parent, getCol(r));
			setCol(r->parent->left,BLACK);
			setCol(r,BLACK);
		}
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr RBTree<K,V,KFromV,Cmp,Alloc>::newNode(NodePtr p, const V &e)
	{
		NodePtr n = allocRB.allocate(1);
		this->constr.construct( &(n->value), e );
		n->left = NULL;
		n->right = NULL;
		n->parent= p;
		setCol(n, RED);
		return n;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr RBTree<K,V,KFromV,Cmp,Alloc>::newNode(ConstNodePtr p)
	{
		NodePtr n = allocRB.allocate(1);
		this->constr.construct(&(n->value), p->value);
		setCol(n, getCol(p));
		return n;				
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::deleteNode(NodePtr n)
	{
		this->constr.destroy(&(n->value));
		allocRB.deallocate(RBNodePtr(n), 1);
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	template<bool MULTI>
	pair<typename RBTree<K,V,KFromV,Cmp,Alloc>::iterator,bool> RBTree<K,V,KFromV,Cmp,Alloc>::insertNode(const V &e)
	{
		NodePtr r;
		if (this->root == NULL)
		{
			r = this->root = SUPER::dummy->left = SUPER::dummy->right = newNode(SUPER::dummy, e);
		}
		else
		{
			r = this->root;
			for (;;)
				if (this->cmp(this->key(e), this->key(r->value))) 
				{
					if (r->left != NULL)
					{
						r= r->left;
					}
					else
					{
						r = insertLeft(r, e);
						break;
					}
				}
				else if (MULTI || this->cmp(this->key(r->value), this->key(e)))
				{
						if (r->right != NULL)
						{
							r = r->right;
						}
						else
						{
							r = insertRight(r, e);
							break;
						}
				}
				else 
				{
					return pair<iterator,bool>(this->getIterator(r), false);
				}
		}
		++this->sz;
		return pair<iterator, bool>(this->getIterator(r), true);
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>                 
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr RBTree<K,V,KFromV,Cmp,Alloc>::insertLeft(NodePtr r, const V &e)
	{
		r->left = newNode(r, e);
		if( r == this->dummy->left )
		{
			this->dummy->left = r->left;
		}
		return r->left;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>                
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr RBTree<K,V,KFromV,Cmp,Alloc>::insertRight(NodePtr r, const V &e)
	{
		r->right = newNode(r, e);
		if(r == this->dummy->right)
		{
			this->dummy->right = r->right;
		}
		return r->right;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::NodePtr RBTree<K,V,KFromV,Cmp,Alloc>::copy(ConstNodePtr x)
	{
		NodePtr r = newNode(x);
		
		if (x == NULL)
		{
			return NULL;
		}		
		r->left = copy(x->left);
		setParent(r->left, r);
		r->right = copy(x->right);
		setParent(r->right, r);
		return r;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::copy(const RBTree &x)
	{
		if (x.empty())
		{
			return;
		}
		this->root = copy(x.root);
		this->root->parent = this->dummy;
		this->dummy->left = leftMost(this->root);
		this->dummy->right = rightMost(this->root);
		this->sz = x.size();
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	RBTree<K,V,KFromV,Cmp,Alloc> &RBTree<K,V,KFromV,Cmp,Alloc>::operator=(const RBTree &x)
	{
		if(this != &x)
		{
			clear();
			copy(x);
		}
		return *this;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	pair<typename RBTree<K,V,KFromV,Cmp,Alloc>::iterator, bool> RBTree<K,V,KFromV,Cmp,Alloc>::insertUni(const V &v)
	{
		pair<iterator, bool> res = insertNode<false>(v);
		if (res.second)
		{
			adjustInsert(this->getNode(res.first));
		}
		return res;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::iterator RBTree<K,V,KFromV,Cmp,Alloc>::insertMulti(const V &v)
	{
		iterator res = insertNode<true>(v).first;
		adjustInsert(getNode(res));
		return res;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::clear(void)
	{
		SUPER::clear(this->root);
		this->dummy->left = this->dummy;
		this->dummy->right = this->dummy;
		this->root = NULL;
		this->sz = 0;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	typename RBTree<K,V,KFromV,Cmp,Alloc>::size_type RBTree<K,V,KFromV,Cmp,Alloc>::erase(const K &e)
	{
		size_type count = 0;
		iterator p = find(e);
		if ( p != this->end() )
		{
			do
			{
				++count; erase(p++);
			}
			while (p!=this->end() && !cmp(e, key(*p)));
		}
		return count;
	}

	template<class K, class V, class KFromV, class Cmp, class Alloc>
	void RBTree<K,V,KFromV,Cmp,Alloc>::erase(iterator pos)
	{
		NodePtr p = getNode(pos);

		if (p == SUPER::dummy->left)
		{
			SUPER::dummy->left= getNode(++iterator(pos));
		}
		if (p == SUPER::dummy->right)
		{
			SUPER::dummy->right= getNode(--iterator(pos));
		}
		if (p->left!= NULL && p->right!= NULL)
		{
			changeNodes(p, rightMost(p->left));                 
		}
		eraseInLeaf(getRefNode(p));
		--this->sz;
	}
	#undef SUPER
};

#endif