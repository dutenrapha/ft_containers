/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tree.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:14:02 by rdutenke          #+#    #+#             */
/*   Updated: 2022/06/05 00:43:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_HPP
#define TREE_HPP

#include "TreeBase.hpp"
#include <stdlib.h>
#include "pair.hpp"

namespace ft {

	template<class K, class V = K> 
	struct Identity
	{
		const K &operator()(const V &v) const { return v; }
	};
	
	#define SUPER TreeBase<V,Alloc>
	template<class K, class V, class KFromV = Identity<K,V>, class Cmp = std::less<K>, class Alloc = std::allocator<V> >
	class Tree : public SUPER
	{
		public:
			typedef typename SUPER::iterator iterator;
			typedef typename SUPER::const_iterator const_iterator;
			typedef typename SUPER::reverse_iterator reverse_iterator;
  			typedef typename SUPER::const_reverse_iterator const_reverse_iterator;
			typedef typename SUPER::size_type size_type;
			typedef typename SUPER::NodePtr NodePtr;
			typedef typename SUPER::reference reference;
			typedef typename SUPER::const_reference const_reference;
			typedef typename SUPER::pointer pointer;
			typedef typename SUPER::const_pointer const_pointer;
			typedef typename SUPER::difference_type difference_type;
			
			typedef K   key_type;
			typedef Cmp key_compare;

		protected:
			typedef KFromV kfromv_type;
			Cmp cmp;
			KFromV kFromV;
			KFromV key_extract() const
			{
				return kFromV;
			}
			
			const K &key(const V &e)
			{
				return kFromV(e);
			}

			const K &key(const V &e) const
			{
				return kFromV(e);
			}
			
			template<bool MULTI>
			pair<iterator, bool> insertNode(const V&);
			
		public:
			Tree(const Cmp &c = Cmp(), const Alloc &a = Alloc(),const KFromV &kv = KFromV()): SUPER(a), cmp(c), kFromV(kv) {}

			key_compare key_comp() const
			{
				return cmp;
			}
			
			iterator find(const K&);

			const_iterator find(const key_type &key) const;
			
			pair<iterator, bool> insertUni(const V &e)
			{
				return insertNode<false>(e);
			}
			
			iterator insertMulti(const V &e)
			{
				return insertNode<true>(e).first;
			}
			
			void erase(iterator i)
			{
				SUPER::erase(i);
			}
			
			size_type erase(const K&);		
	};

	template<class K, class V, class F, class C, class Alloc>
	template<bool MULTI>
	pair<typename Tree<K,V,F,C,Alloc>::iterator,bool> Tree<K,V,F,C,Alloc>::insertNode(const V &e)
	{
		NodePtr r;
	
		if (this->root == NULL)
		{	
			SUPER::dummy->right = this->newNode(SUPER::dummy, e);
			SUPER::dummy->left = SUPER::dummy->right;
			this->root = SUPER::dummy->left;
			r = this->root;
		}
		else
		{
			r = this->root;
			for (;;)
				if (cmp(key(e), key(r->value)))
					if (r->left != NULL)
					{
						r= r->left;
					}
					else 
					{
						r = this->insertLeft(r, e); 
						break; 
					}
				else if (MULTI || cmp(key(r->value), key(e)))
				{
						if (r->right != NULL)
						{
							r = r->right;
						}
						else
						{
							r = this->insertRight(r, e); 
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

	template<class K, class V, class F, class C, class Alloc>
	typename Tree<K,V,F,C,Alloc>::iterator Tree<K,V,F,C,Alloc>::find(const K &k)
	{
		NodePtr r = this->root;
		NodePtr aux = SUPER::dummy;
		
		while ( r != NULL )
		{
			if (cmp(key(r->value), k) )
			{
				r = r->right;
			}
			else
			{
				aux = r; 
				r = r->left;
			}
		}
		if (aux == SUPER::dummy || cmp(k, key(aux->value)))
		{
			return SUPER::end();
		}
		else
		{
			return this->getIterator(aux);
		}
	}

	template<class K, class V, class F, class C, class Alloc>
	typename Tree<K,V,F,C,Alloc>::const_iterator Tree<K,V,F,C,Alloc>::find(const K &k) const
	{
		NodePtr r = this->root;
		NodePtr aux = SUPER::dummy;
		
		while ( r != NULL )
		{
			if (cmp(key(r->value), k) )
			{
				r = r->right;
			}
			else
			{
				aux = r; 
				r = r->left;
			}
		}
		if (aux == SUPER::dummy || cmp(k, key(aux->value)))
		{
			return SUPER::end();
		}
		else
		{
			return this->getConstIterator(aux);
		}
	}


	template<class K, class V, class F, class C, class Alloc>
	typename Tree<K,V,F,C,Alloc>::size_type Tree<K,V,F,C,Alloc>::erase(const K &k)
	{
		iterator p = find(k);
		size_type count = 0;
		if ( p != SUPER::end() )
		{
			do
			{
				++count; 
				erase(p++);
			}
			while (p != SUPER::end() && !(cmp(k, key(*p))));
		}
		return count;	
	}
	#undef SUPER
};

#endif