/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_iterator.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:08:28 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/23 17:02:44 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_ITERATOR
#define MAP_ITERATOR

#include "red_black_tree.hpp"

namespace ft {

	template <typename T>
	class map_iterator
	{
		typedef	map_iterator<T>					iterator;
		typedef std::bidirectional_iterator_tag	iterator_category;
		typedef T								value_type;
		typedef T*								pointer;
		typedef T&								reference;
		typedef ft::btree<T>*					node_pointer;
		typedef ft::btree<T>&					node_reference;
		typedef std::ptrdiff_t					difference_type;
	};


}

#endif