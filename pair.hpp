/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:09:24 by rdutenke          #+#    #+#             */
/*   Updated: 2022/06/08 03:56:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_TPP
#define PAIR_TPP

namespace ft
{
	template <class T1, class T2>
	struct pair
	{
		typedef T1 first_type;
		typedef T2 second_type;

		first_type	first;
		second_type	second;

		public:

			pair(): first(T1()), second(T2())     {}
			pair(const T1 &u, const T2 &v) : first(u), second(v) {}
		
			pair& operator=(const pair& other)
			{
				this->first = other.first;
				this->second = other.second;
				return (*this);
			}	
	};

	template< class T1, class T2 >
	bool operator == (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		if((lhs.first == rhs.first) && (lhs.second == rhs.second))
			return (true);
		return (false);
	}
	template< class T1, class T2 >
	bool operator != (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		return (!(lhs == rhs));
	}
	template< class T1, class T2 >
	bool operator < (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		if(lhs.first < rhs.first)
			return (true);
		if(rhs.first < lhs.first)
			return (false);
		if(lhs.second < rhs.second)
			return (true);
		return (false);
	}
	template< class T1, class T2 >
	bool operator <= (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		return (!(rhs < lhs));
	}
	template< class T1, class T2 >
	bool operator > (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		return (rhs < lhs);
	}
	template< class T1, class T2 >
	bool operator >= (const ft::pair<T1,T2>& lhs, const ft::pair<T1,T2>& rhs)
	{
		return (!(lhs < rhs));
	}
	template <class T1, class T2>
	ft::pair<T1,T2> make_pair (T1 x, T2 y)
	{
		return (ft::pair<T1, T2>(x, y));
	}
}

#endif
