/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:02:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/06/05 16:30:55 by coder            ###   ########.fr       */
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
			typedef typename SUPER::reverse_iterator reverse_iterator;
  			typedef  typename SUPER::const_reverse_iterator const_reverse_iterator;
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

			iterator insert(iterator hint, const value_type &val)
			{
    			return SUPER::insertUni(hint, val);
  			}

			void insert(iterator first, iterator last)
			{
    			return SUPER::insertUni(first, last);
  			}
		
			T &operator[](const K &key)
			{
				return insert(value_type(key, T())).first->second;
			}

			size_type max_size(void) const
			{
				return (this->allocRB.max_size());
			}

			value_compare value_comp() const
			{
				return value_compare(SUPER::key_comp());
			}

			size_type count(const key_type &key) const
			{
				if (this->find(key) != this->end())
				{
					return 1;
				}
				else
				{
					return 0;
				}
  			}

			iterator lower_bound(const key_type &key)
			{
				 return iterator(SUPER::_lower_bound(key));
			}

			const_iterator lower_bound(const key_type &key) const
			{
				return const_iterator(SUPER::_lower_bound(key));
			}

			iterator upper_bound(const key_type &key)
			{
				 return iterator(SUPER::_upper_bound(key));
			}

			const_iterator upper_bound(const key_type &key) const
			{
				return const_iterator(SUPER::_upper_bound(key));
			}

			ft::pair<iterator, iterator> equal_range(const key_type &k)
			{
   				return ft::make_pair(this->lower_bound(k), this->upper_bound(k));
  			}

			ft::pair<const_iterator, const_iterator> equal_range(const key_type &k) const 
			{
				return ft::make_pair(this->lower_bound(k), this->upper_bound(k));
			}

			allocator_type get_allocator() const
			{
				return allocator_type(SUPER::alloc);
			}

	};

	template <class K, class T, class Cmp, class Alloc>
	bool operator==(const ft::map<K, T, Cmp, Alloc> &lhs, const ft::map<K, T, Cmp, Alloc> &rhs)
	{
  		return lhs.size() == rhs.size() && ft::equal(lhs.begin(), lhs.end(), rhs.begin());
	}

	template <class K, class T, class Cmp, class Alloc>
	bool operator!=(const map<K, T, Cmp, Alloc> &lhs, const map<K, T, Cmp, Alloc> &rhs)
	{
  		return !(lhs == rhs);
	}

	template <class K, class T, class Cmp, class Alloc>
	bool operator<(const map<K, T, Cmp, Alloc> &lhs, const map<K, T, Cmp, Alloc> &rhs)
	{
  		return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
	}

	template <class K, class T, class Cmp, class Alloc>
	bool operator>(const map<K, T, Cmp, Alloc> &lhs, const map<K, T, Cmp, Alloc> &rhs)
	{
  		return rhs < lhs;
	}

	template <class K, class T, class Cmp, class Alloc>
	bool operator<=(const map<K, T, Cmp, Alloc> &lhs, const map<K, T, Cmp, Alloc> &rhs)
	{
  		return !(rhs < lhs);
	}

	template <class K, class T, class Cmp, class Alloc>
	bool operator>=(const map<K, T, Cmp, Alloc> &lhs, const map<K, T, Cmp, Alloc> &rhs)
	{
  		return !(lhs < rhs);
	}

	template <class K, class T, class Cmp, class Alloc>
	void swap(map<K, T, Cmp, Alloc> &lhs, map<K, T, Cmp, Alloc> &rhs)
	{
		lhs.swap(rhs);
	}

	#undef SUPER
}

#endif
