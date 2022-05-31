/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:02:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/31 03:47:02 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP

#include "pair.hpp"
#include <stdlib.h>
#include "RBTree.hpp"

namespace ft
{
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
		typedef typename SUPER::value_type	value_type;
		typedef typename SUPER::iterator 	iterator;
		typedef T							mapped_type;

		map(const Cmp &c=Cmp(), const Alloc &a=Alloc() ) : SUPER(c, a) {}

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
