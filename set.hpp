/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 03:43:37 by coder             #+#    #+#             */
/*   Updated: 2022/06/10 23:22:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SET_HPP
#define SET_HPP

#include <stdlib.h>
#include "RBTree.hpp"

namespace ft
{
	// template<class K, class T = K> 
	// struct Identity
	// {
	// 	const K &operator()(const T &t) const { return t; }
	// };
	
	#define SUPER  RBTree<T,T,Identity<T>,Cmp,Alloc>
	template <class T, class Cmp = std::less<T>, class Alloc = std::allocator<T> >
	class set: public SUPER
	{
		public:
			typedef T value_type;
			typedef T key_type;
			typedef Cmp key_compare;
			typedef Cmp value_compare;
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

		explicit set(const key_compare &c = key_compare(),
               const allocator_type &alloc = allocator_type())
      	: SUPER(c,alloc) {}

		template <class InputIterator>
  		set(InputIterator first, InputIterator last,
      		const key_compare &c = key_compare(),
      		const allocator_type &alloc = allocator_type())
      		: SUPER(c, alloc)
		{
			for (; first != last; ++first)
			{
				SUPER::insertUni(*first);
			}
  		}

		set(const set &x) :SUPER(x) {}

		~set() {}

		 size_type count(const value_type &val) const
		{
			if (this->find(val) != this->end())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

	};

	template <class Key, class Compare, class Alloc>
	bool operator==(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs) 
	{
  		return lhs.size() == rhs.size() && ft::equal(lhs.begin(), lhs.end(), rhs.begin());
	}

	template <class Key, class Compare, class Alloc>
	bool operator!=(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs)
	{
		return !(lhs == rhs);
	}

	template <class Key, class Compare, class Alloc>
	bool operator<(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs)
	{
  		return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), Compare());
	}

	template <class Key, class Compare, class Alloc>
	bool operator<=(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs)
	{
  		return !(rhs < lhs);
	}
	
	template <class Key, class Compare, class Alloc>
	bool operator>(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs)
	{
  		return rhs < lhs;
	}

	template <class Key, class Compare, class Alloc>
	bool operator>=(const set<Key, Compare, Alloc> &lhs, const set<Key, Compare, Alloc> &rhs)
	{
  		return !(lhs < rhs);
	}

	template <class Key, class Compare, class Alloc>
	void swap(set<Key, Compare, Alloc> &lhs, set<Key, Compare, Alloc> &rhs)
	{
  		lhs.swap(rhs);
	}

	#undef SUPER

};
#endif
