/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TreeBase.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:31:00 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/23 18:31:54 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TREE_BASE_HPP
#define TREE_BASE_HPP

#include "iterator_traits.hpp"
#include "reverse_iterator.hpp"

#include "pair.hpp"
#include <stdlib.h>

namespace ft {

	template <class T, class Alloc = std::allocator<T> >
	class TreeBase
	{
		protected:
			struct Node;
			typedef typename Alloc::template rebind<Node>::other ANode;
			typedef typename ANode::pointer NodePtr;
			typedef typename ANode::const_pointer ConstNodePtr;
			struct Node 
			{
				T		value;
				NodePtr	right;
				NodePtr	left;
				NodePtr	parent;
			};

			template<class NodePtr, class PTR, class REF> class IT;
			// template<class NodePtr, class PTR, class REF> friend class IT;

		public:
			typedef T value_type;
			typedef Alloc allocator_type;
			typedef typename allocator_type::reference reference;
			typedef typename allocator_type::const_reference const_reference;
			typedef typename allocator_type::pointer pointer;
			typedef typename allocator_type::const_pointer const_pointer;
			typedef typename allocator_type::difference_type difference_type;
			typedef std::size_t size_type;

			typedef IT<NodePtr, pointer, reference> iterator;
			typedef IT<ConstNodePtr, const_pointer, const_reference> const_iterator;
			typedef ft::reverse_iterator<iterator> reverse_iterator;
  			typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;

		protected:
			Alloc constr;
			ANode alloc;
			size_type sz;
			NodePtr root;
			NodePtr dummy;
		

			//Allocates the sentinel node and starts its pointers pointing at itself.
			NodePtr newNode(void);

			//Helper function of insert(). Allocates a Node and starts its value with e, left and rigth with NULL and parent with p.
			NodePtr newNode(NodePtr p, const T &e);

			//Helper function of copy(). Allocates a Node and builds value by copy of p.value.
			NodePtr newNode(ConstNodePtr p);

			//Delete and deacolate a node point by p
			void deleteNode(NodePtr p);

			//If MULTI is true execute insertMulti(), if MULTI is false execute insertUni().
			template<bool MULTI>
			pair<iterator, bool> insertNode(const T&e);

			//Inserts a left node of r. Returns the inserted node.
			NodePtr insertLeft(NodePtr r, const T&e);
			
			//Inserts a right node of r. Returns the inserted node.
			NodePtr insertRight(NodePtr r, const T&e);

			//Set Parent
			static void setParent(NodePtr child, NodePtr father);

			//Heper function of erase. The parent of x passes the y part.
			void transferParent(NodePtr x, NodePtr y);
			
			//Heper function of erase., node x is replaced by node y. 
			//The parent of x becomes the parent of y the right and left subtrees of x become the right and left subtrees of y.
			void transferNode(NodePtr x, NodePtr y);

			//Delete the tree or subtree rooted at r.
			void clear(NodePtr r);

			//Build a tree by copying the tree rooted in r. 
			//Returns a pointer to the root of the copy.
			NodePtr copy(ConstNodePtr r);

			//Build a tree by copy of p
			void copy(const TreeBase &p);

			//Returns the rightmost node of subtree r.
			template<class NP> 
			static NP rightMost(NP r);
	
			//Returns the leftmost node of subtree r.
			template<class NP> 
			static NP leftMost(NP r);

			//Heper function of isbalance.
			static bool isBalanced(ConstNodePtr, int &);

			iterator getIterator(NodePtr p)
			{
				return p;
			}
			
			NodePtr getNode(iterator  i)
			{
				return i.current;
			} 
		//Public interface of TreeBase
		public:

			//Empty constructor
			TreeBase(const Alloc &a = Alloc()) : constr(a), alloc(a),sz(0), root(NULL), dummy(newNode()){ }
			
			//Copy constructor
			TreeBase(const TreeBase &p);
			
			//Desconstructor
			~TreeBase();

			//Equal overload
			TreeBase &operator=( const TreeBase &x);

			//Get Iterators
			iterator begin(void)
			{
				return dummy->left;
			}

			iterator end(void)
			{
				return dummy;
			}

			const_iterator begin(void)	const
			{
				return dummy->left;
			}

			const_iterator end(void)	const
			{
				return dummy;
			}

			reverse_iterator rbegin()
			{
				return reverse_iterator(end());
			}

			const_reverse_iterator rbegin() const
			{
				return const_reverse_iterator(end());
			}

			//Access to dimensions
			size_t size(void) const
			{
				return sz;
			}

			bool empty(void) const
			{
				return size() == 0;
			}

			//Access to elements
			reference front(void)
			{
				return *begin();
			}

			reference back(void)
			{
				return *(--end());
			}
			
			const_reference front(void)	const
			{
				return *begin();
			}

			const_reference back(void)	const 
			{
				return *(--end());
			}

			//Looks for a n whose value is n. If it exists, returns an iterator for that node. Otherwise, return end().
			iterator find(const T &n);

			// Insert the value no in order, if it does not already exist.
			pair<iterator, bool> insertUni(const T &n);

			// Orderly inserts the value n, even if it already exists.
			iterator insertMulti(const T &n);

			// Removes from the tree the node whose value is n, if it exists.
			size_type erase(const T &n);

			// Removes the element pointed by i from the tree.
			void erase(iterator i);

			// Removes all elements.
			void clear(void);

			// Promotes tree balance.
			void balance(void);

			// Tests if the tree is balanced
			bool isBalanced(void) const;
			
	};

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::newNode(void)
	{
		NodePtr n = alloc.allocate(1);
		n->left = n;
		n->right = n;
		n->parent = n;
		return n;
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::newNode(NodePtr p, const T &e)
	{
		NodePtr n = alloc.allocate(1);
		constr.construct( &(n->value), e);
		n->left = NULL; 
		n->right = NULL;
		n->parent = p;
		return n;
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::newNode(ConstNodePtr p)
	{
		NodePtr n = alloc.allocate(1);
		constr.construct( &(n->value), p->value);
		return n;
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::deleteNode(NodePtr p) 
	{
		constr.destroy(&(p->value)); 
		alloc.deallocate(p, 1);
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::copy(ConstNodePtr x)
	{
		if (x == NULL)
		{
			return NULL;
		}
		NodePtr r = newNode(x);
		r->left = copy(x->left); 
		setParent(r->left, r);
		r->right = copy(x->right); 
		setParent(r->right, r);
		return r;
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::copy(const TreeBase &p)
	{
		if (p.empty()) 
		{
			return;
		}
		root = copy(p.root);
		root->parent = dummy;
		dummy->left = leftMost(root);
		dummy->right = rightMost(root);
		sz = p.size();
	}

	template<class T, class Alloc>
	TreeBase<T,Alloc>::TreeBase(const TreeBase &p): constr(p.get_allocator()), alloc(p.get_allocator()), sz(0), root(NULL), dummy(newNode())
	{
		copy(p);
	}

	template<class T, class Alloc>
	TreeBase<T,Alloc>::~TreeBase()
	{
		// Delete all nodes from the tree
		clear(root); 	
		//Free dummy.
		alloc.deallocate(dummy, 1); 
	}

	template<class T, class Alloc> void TreeBase<T,Alloc>::clear(void)
	{
		//Delete all nodes from the tree
		clear(root);
		//Update attributes.
		dummy->left = dummy;
		dummy->right = dummy; 
		root = NULL; 
		sz = 0;
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::clear(NodePtr r) 
	{
		if(r == NULL)
		{
			return;
		}
		clear(r->left); 
		clear(r->right);
		deleteNode(r);
	}

	template<class T, class Alloc> template <bool MULTI>
	pair<typename TreeBase<T,Alloc>::iterator, bool> TreeBase<T,Alloc>::insertNode(const T &e)
	{

		NodePtr r;
		if (root == NULL)
		{
			r = newNode(dummy, e);
			root = r;
			dummy->left = r;
			dummy->right= r;
		}
		else
		{
			r = root;
			for (;;)
				if (e < r->value)
				{							 
					if (r->left != NULL)
					{
						r = r->left;
					}
					else
					{
						r = insertLeft(r, e);
						break;
					}
				}
				else if (MULTI || r->value < e)
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
					return pair<iterator, bool>(r, false);
				}
		}
		++sz;	
		return pair<iterator, bool>(r, true); 
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::insertLeft(NodePtr r, const T &e)
	{
		r->left = newNode(r, e);
		if( r == dummy->left )
		{
			dummy->left = r->left;
		}
		return r->left;
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::NodePtr TreeBase<T,Alloc>::insertRight(NodePtr r, const T &e)
	{
		r->right = newNode(r, e);
		if(r == dummy->right)
		{
			dummy->right = r->right;
		}
		return r->right;
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::setParent(NodePtr child, NodePtr parent)
	{
		if(child != NULL) 
		{
			child->parent = parent;
		}
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::transferParent(NodePtr x, NodePtr y)
	{
		NodePtr xp = x->parent;
		if (x==root)
		{
			x=root;
			if (xp->right==x)
			{
				xp->right = xp->right;
			}
			else
			{
				xp->right = xp->left;
			}
		}
		else
		{
			x = y;
		}
		setParent(y, xp);
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::transferNode(NodePtr x, NodePtr y)
	{
		transferParent(x, y);
		y->left = x->left;
		setParent(y->left, y);
		y->right = x->right;
		setParent(y->right, y);
	}

	template<class T, class Alloc>
	template<class NP> NP TreeBase<T,Alloc>::rightMost (NP r) 
	{
		while (r->right != NULL) 
		{
			r = r->right;
		}
		return r;
	}

	template<class T, class Alloc>
	template<class NP> NP TreeBase<T,Alloc>::leftMost(NP r)	
	{
		while (r->left != NULL)
		{
			r = r->left;
		}
		return r;
	}

	template<class T, class Alloc>
	bool TreeBase<T,Alloc>::isBalanced(ConstNodePtr r, int &h)
	{
		int hl;
		
		if (r == NULL)
		{
			h = 0; 
			return true;	
		}
		if (isBalanced(r->right, h) && isBalanced(r->left, hl) && abs(h- hl)<=1)
		{
			if (hl > h)
			{
				h += 2;
			}
			else
			{
				h += 1;
			}
			return true;
		}
		return false;
	}

	template<class T, class Alloc>
	bool TreeBase<T,Alloc>::isBalanced(void) const
	{
		int h; 
		return isBalanced(root,h); 
	}

	//Public Interface

	template<class T, class Alloc>
	TreeBase<T,Alloc> &TreeBase<T,Alloc>::operator=(const TreeBase &x) {
	if( this != &x )
	{
		clear();    
		copy(x);
	}
	return *this;
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::iterator TreeBase<T,Alloc>::find(const T &e)
	{
		NodePtr r = root;
		NodePtr aux = dummy;
		
		while (r != NULL)
		{
			if ( r->value < e )
			{
				r = r->right; 
			}
			else
			{
				aux = r;
				r = r->left;
			}   
		}
		if (aux == dummy || e < aux->value)
		{
			return end();	
		}
		else
		{
			return aux;	
		}		
	}

	template<class T, class Alloc>
	pair<typename TreeBase<T,Alloc>::iterator, bool> TreeBase<T,Alloc>::insertUni(const T &e)
	{
		return insertNode<false>(e);
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::iterator TreeBase<T,Alloc>::insertMulti(const T &e)
	{
		return insertNode<true>(e).first;
	}

	template<class T, class Alloc>
	typename TreeBase<T,Alloc>::size_type TreeBase<T,Alloc>::erase(const T &e)
	{
		size_type count = 0;	
		iterator p = find(e);
		if ( p != end() )
		{
			do
			{
				++count;
				erase(p++);
			}		
			while (p!=end() && !(e<*p));
		}
			return count;
	}

	template<class T, class Alloc>
	void TreeBase<T,Alloc>::erase(iterator i)
	{
		NodePtr r = i.current;
		if (r == dummy->left)
		{
			dummy->left=(++iterator(i)).current;
		}

		if (r == dummy->right) 
		{
			dummy->right=(--iterator(i)).current;
		}

		if (r->left == NULL)
		{
			transferParent(r, r->right);
		}
		else if (r->right == NULL)
		{
			transferParent(r, r->left);
		}
		else
		{
			NodePtr previous = rightMost(r->left);
			transferParent(previous, previous->left);
			transferNode(r, previous);
		}
		--sz;
		deleteNode(r);
	}

	template<class T, class Alloc>
	template< class NodePtr, class PTR, class REF>
	class TreeBase<T,Alloc>::IT : public ft::iterator< bidirectional_iterator_tag, T,typename Alloc::difference_type, PTR, REF > 
	{
		// friend TreeBase<T,Alloc>;
		
		// friend TreeBase<T,Alloc>::const_iterator;										
		
		// NodePtr current; 
		
		void inc();
		void dec();
		
		// IT(NodePtr p):current(p) {} 
		public:
			// IT() {}
			NodePtr current; 
			IT(NodePtr p):current(p) {} 
			
			template<class NP, class P, class R>
			IT(IT<NP,P,R> i) : current(i.current) {}

			IT &operator++()
			{
				inc(); 
				return *this;
			}

			IT &operator--()
			{
				dec(); 
				return *this;
			}

			IT operator++(int)
			{
				IT i(*this); 
				inc(); 
				return i;
			}

			IT operator--(int)
			{
				IT i(*this);
				dec(); 
				return i;
			}

			REF operator*() const
			{
				return current->value;
			}

			PTR operator->() const
			{
				return &current->value;
			}

			bool operator==(IT i) const
			{
				return current == i.current;
			}

			bool operator!=(IT i) const
			{
				return !(*this == i);
			}
	};

	template<class T, class Alloc>
	template<class NodePtr, class PTR, class REF>
	void TreeBase<T,Alloc>::IT<NodePtr,PTR,REF>::inc()
	{
		if (current->right == NULL)
		{
			NodePtr ptr = current;
			while ((current = current->parent)->right == ptr )
			{
				ptr = current;
			}
		}
		else 
		{
			current = TreeBase<T,Alloc>::leftMost(current->right);
		}
	};

	template<class T, class Alloc>
	template<class NodePtr, class PTR, class REF>
	void TreeBase<T,Alloc>::IT<NodePtr,PTR,REF>::dec()
	{
		if (current->left == NULL) {
			NodePtr ptr = current;
			while ((current=current->parent)->left == ptr)
				ptr = current;
		}
		else
		{
			if(current->parent == current)
			{
				current = current->right;
			}
			else
			{
				current = TreeBase<T,Alloc>::rightMost(current->left);
			}
		}
	}




};

#endif
