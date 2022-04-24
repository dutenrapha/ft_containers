/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_traits.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:22:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/04/24 20:37:00 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TYPE_TRAITS_HPP
#define TYPE_TRAITS_HPP

namespace ft {

template <bool Cond, class T = void>
struct enable_if {};

template <class T>
struct enable_if<true, T> { typedef T type; };

template <class T, T v> 
struct integral_constant {
  static const T value = v;
  typedef T value_type;
  typedef integral_constant<T, v> type;
  operator value_type() { return value; }
};

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

template <class T> 
struct is_integral : false_type {};

template <class T>
struct is_integral<const T> : is_integral<T> {};

template <class T>
struct is_integral<volatile T> : is_integral<T> {};

template <class T> 
struct is_integral<const volatile T> : is_integral<T> {};

template <>
struct is_integral<bool> : true_type {};

template <>
struct is_integral<char> : true_type {};

template <>
struct is_integral<wchar_t> : true_type {};

template <>
struct is_integral<signed char> : true_type {};

template <>
struct is_integral<short int> : true_type {};

template <>
struct is_integral<int> : true_type {};

template <>
struct is_integral<long int> : true_type {};

template <>
struct is_integral<long long int> : true_type {};

template <>
struct is_integral<unsigned char> : true_type {};

template <>
struct is_integral<unsigned short int> : true_type {};

template <>
struct is_integral<unsigned int> : true_type {};

template <>
struct is_integral<unsigned long int> : true_type {};

template <>
struct is_integral<unsigned long long int> : true_type {};

}

#endif
