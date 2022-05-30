/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:22:08 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/29 22:29:32 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITERATORS_TRAITS_HPP
#define ITERATORS_TRAITS_HPP

#include <iostream>

namespace ft {

	struct input_iterator_tag {};

	struct output_iterator_tag {};

	struct forward_iterator_tag : public input_iterator_tag {};

	struct bidirectional_iterator_tag : public forward_iterator_tag {};

	struct random_access_iterator_tag : public bidirectional_iterator_tag {};
	

	template <class Cat, class T, class Dist = std::ptrdiff_t, class Ptr = T*, class Ref = T&>
	struct iterator
	{
		typedef Cat iterator_category;
		typedef T   value_type;
		typedef Dist difference_type;
		typedef Ptr pointer;
		typedef Ref reference;
	};
	
	template <class T>
	struct iterator_traits {
		typedef typename T::value_type			value_type;
		typedef typename T::difference_type		difference_type;
		typedef typename T::iterator_category	iterator_category;
		typedef typename T::pointer				pointer;
		typedef typename T::reference			reference;
	};

	template <typename T>
	struct iterator_traits<T*>
	{
		typedef ft::random_access_iterator_tag	iterator_category;
		typedef T								value_type;
		typedef T*								pointer;
		typedef T&								reference;
		typedef std::ptrdiff_t					difference_type;
	};

	template <class T>
	class iterator_traits<const T*>
	{
		typedef ft::random_access_iterator_tag	iterator_category;
		typedef T								value_type;
		typedef const T*						pointer;
		typedef const T&						reference;
		typedef std::ptrdiff_t					difference_type;
	};

};

#endif
