/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:02:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/06/04 17:53:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "pair.hpp"
#include <stdlib.h>
#include "RBTree.hpp"

namespace ft
{
	template <class Arg1, class Arg2, class Result> struct binary_function
	{
		typedef Arg1 first_argument_type;
		typedef Arg2 second_argument_type;
		typedef Result result_type;
	};

	template <class K, class T> 
	struct FirstOfPair
	{
		const K &operator()(const pair<K,T> &p) const
		{
			return p.first;
		}
	};
	
	#define SUPER  RBTree<K,pair<K,T>,FirstOfPair<K,T>,Cmp,Alloc>
	template <class K, class T, class Cmp = std::less<K>, class Alloc = std::allocator< pair<K,T> > >
	class map: public SUPER
	{
		public:
			typedef typename SUPER::key_type 	key_type;
			typedef T							mapped_type;
			typedef typename SUPER::value_type	value_type;
			typedef typename SUPER::key_compare key_compare;
				
			class value_compare : ft::binary_function<value_type, value_type, bool>
			{
			
				friend class map;

				protected:
					Cmp comp;
					value_compare(Cmp c) : comp(c) {}

				public:
					typedef bool result_type;
					typedef value_type first_argument_type;
					typedef value_type second_argument_type;

					bool operator()(const value_type &x, const value_type &y) const
					{
						return comp(x.first, y.first);
					}
			};
  
			typedef Alloc allocator_type;
			typedef typename SUPER::reference reference;
			typedef typename SUPER::const_reference const_reference;
			typedef typename SUPER::pointer pointer;
			typedef typename SUPER::const_pointer const_pointer;
			typedef typename SUPER::iterator 	iterator;
			typedef typename SUPER::const_iterator const_iterator;
			typedef typename SUPER::difference_type difference_type;
			typedef typename SUPER::size_type size_type;
			
			map(const Cmp &c=Cmp(), const Alloc &a=Alloc() ) : SUPER(c, a) {}

			template <class iterator>
			map(iterator first, iterator last, const Cmp &c = Cmp(),
				const allocator_type &alloc = allocator_type())
				:SUPER(c,alloc)
			{
				for (; first != last; ++first)
				{
					SUPER::insertUni(*first);
				}
			}
			
			map(const map &x) :SUPER(x) {}
	
			pair<iterator,bool> insert(const value_type &value) 
			{
				return SUPER::insertUni(value);
			}
		
			T &operator[](const K &key)
			{
				return insert(value_type(key, T())).first->second;
			}

			
			
	};	

	#undef SUPER
}

#endif
