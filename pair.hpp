/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:09:24 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/11 17:41:48 by rdutenke         ###   ########.fr       */
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

			pair()
			{
				this->first = T1();
				this->second = T2();
			}

			template<class U, class V>
			pair (const pair<U,V>& pr)
			{
				this->first = pr.first;
				this->second = pr.second;
			}

			pair (const first_type& a, const second_type& b)
			{
				this->first = a;
				this->second = b;	
			}
			
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
