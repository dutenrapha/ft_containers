/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:06:24 by rdutenke          #+#    #+#             */
/*   Updated: 2022/04/24 20:37:19 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft {

	template <typename T>
	class random_access_iterator
	{
		public:
			typedef	random_access_iterator<T>		iterator;
			typedef ft::random_access_iterator_tag	iterator_category;
			typedef T								value_type;
			typedef T*								pointer;
			typedef T&								reference;
			typedef std::ptrdiff_t					difference_type;
			typedef random_access_iterator<const T>	const_iterator;

			random_access_iterator() 
			{
				_p = NULL;
			}

			explicit random_access_iterator(pointer p)
			{
				_p = p;
			}
			
			random_access_iterator(const random_access_iterator& src)
			{
				*this = src;
			}

			~random_access_iterator()
			{
				return ;
			}

			random_access_iterator& operator=(const random_access_iterator& rhs)
			{
				this->_p = rhs._p;
				return *this;
			}

			operator const_iterator() const 
			{
				return const_iterator(_p);
			}

			bool operator==(const iterator& rhs)
			{
				return this->_p == rhs._p;
			}
			
			bool operator!=(const iterator& rhs)
			{
				return this->_p != rhs._p;
			}
			
			bool operator>(const iterator& rhs)
			{
				return this->_p > rhs._p;
			}
			
			bool operator>=(const iterator& rhs)
			{
				return this->_p >= rhs._p;
			}
			
			bool operator<(const iterator& rhs)
			{
				return this->_p < rhs._p;
			}
			
			bool operator<=(const iterator& rhs)
			{
				return this->_p <= rhs._p;
			}

			iterator& operator++(void)
			{
				this->_p++;
				return (*this);
			}

			iterator& operator--(void)
			{
				this->_p--;
				return (*this);
			}

			iterator operator++(int)
			{
				iterator tmp(*this);
				this->_p++;
				return (tmp);
			}
			
			iterator operator--(int)
			{
				iterator tmp(*this);
				this->_p--;
				return (tmp);
			}

			iterator operator+(int rhs)
			{
				return (iterator(this->_p + rhs));
			}

			iterator operator-(int rhs)
			{
				return (iterator(this->_p - rhs));
			}
			
			iterator& operator+=(int rhs)
			{
				this->_p += rhs;
				return (*this);
			}
			
			iterator& operator-=(int rhs)
			{
				this->_p -= rhs;
				return (*this);
			}

			int operator+(const iterator& rhs)
			{
				return (this->_p + rhs._p);
			}
			int operator-(const iterator& rhs)
			{
				return (this->_p - rhs._p);
			}

			reference	operator[](const int n) const 
			{
				return (this->_p[n]);
			}
			
			reference	operator*(void) const 
			{
				return *(this->_p);
			}
			
			pointer		operator->(void) 
			{
				return (this->_p);
			}
	
		private:
			pointer	_p;
	};
}

#endif
