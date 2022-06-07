/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 03:10:34 by coder             #+#    #+#             */
/*   Updated: 2022/06/07 03:10:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"

namespace ft
{
	template< class T, class Container = ft::vector<T> >
	class stack
	{
		public:
			typedef	typename Container::value_type		value_type;
			typedef	Container							container_type;
			typedef	typename Container::size_type		size_type;

			template< class T2, class Container2>
			friend bool operator == (const stack<T2, Container2> & lhs, const stack<T2, Container2> & rhs);

			template< class T2, class Container2>
			friend bool operator < (const stack<T2, Container2> & lhs, const stack<T2, Container2> & rhs);
		
		protected:
			container_type	_container;

		public:
			explicit stack(const container_type &ctnr = container_type()) : _container(ctnr) {}

			stack( const stack& other ): _container(other._container) {}

			~stack() {}

			stack& operator=( const stack& other )
			{ 
				_container = other._container;
				return (*this);
			}

			bool empty() const
			{
				return _container.empty();
			}

			size_type size() const
			{
				return _container.size();
			}

			value_type &top()
			{
				return _container.back();
			}

			const value_type &top() const
			{
				return _container.back();
			}

			void push(const value_type &value)
			{
				_container.push_back(value);
			}

			void pop()
			{
				_container.pop_back();
			}
	};

	template <class T, class Container>
	bool operator==(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
	{
  		return lhs._container == rhs._container;
	}

	template <class T, class Container> 
	bool operator!=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
	{
  		return !(lhs == rhs);
	}

	template <class T, class Container>
	bool operator<(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs) 
	{
		return lhs._container < rhs._container;
	}

	template <class T, class Container>
	bool operator>(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
	{
		return rhs < lhs;
	}

	template <class T, class Container>
	bool operator<=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
	{
		return !(rhs < lhs);
	}

	template <class T, class Container>
	bool operator>=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
	{
		return !(lhs < rhs);
	}

}

#endif