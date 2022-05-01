/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:55:15 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/01 16:32:11 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft {

	template<class Iterator>
	class reverse_iterator
	{
	public:
		typedef Iterator													iterator_type;
		typedef typename ft::iterator_traits<Iterator>::iterator_category 	iterator_category;
		typedef typename ft::iterator_traits<Iterator>::value_type			value_type;
		typedef typename ft::iterator_traits<Iterator>::difference_type		difference_type;
		typedef typename ft::iterator_traits<Iterator>::pointer				pointer;
		typedef typename ft::iterator_traits<Iterator>::reference			reference;

		reverse_iterator(void)
		{
			return ;
		}
		
		explicit reverse_iterator(iterator_type it)
		{
			this->_it = it;
		}
		
		template <class Iter>
		reverse_iterator(const reverse_iterator<Iter> &other)
		{
			this->_it = other.base();
		}
		
		~reverse_iterator(void)
		{
			return ;
		}

		reverse_iterator& operator=(reverse_iterator const &rhs)
		{
			this->_it = rhs.base();
			return *this;
		}

		iterator_type base(void) const
		{
			return (this->_it);
		}

		reference	operator[](difference_type n) const
		{
			return (this->base()[n - 1]);
		}

		reference	operator*(void) const
		{
			iterator_type tmp = this->_it;
			return *(tmp);
		}

		pointer		operator->(void) const
		{
			return &(operator*());
		}

		reverse_iterator& operator++(void)
		{
			this->_it--;
			return (*this);
		}
		reverse_iterator& operator--(void)
		{
			this->_it++;
			return (*this);
		}
		reverse_iterator operator++(int)
		{
			reverse_iterator tmp = *this;
			this->_it--;
			return (tmp);
		}
		reverse_iterator operator--(int)
		{
			reverse_iterator tmp = *this;
			this->_it++;
			return (tmp);
		}
		
		reverse_iterator operator+(difference_type n) const 
		{
			return reverse_iterator(base() - n);
		}
		
		reverse_iterator operator-(difference_type n) const 
		{ 
			return reverse_iterator(base() + n); 
		}
		
		reverse_iterator& operator+=(difference_type n)
		{
			this->_it -= n;
			return (*this);
		}
		
		reverse_iterator& operator-=(difference_type n)
		{
			this->_it += n;
			return (*this);
		}
	
	private:
		iterator_type _it;
	};
	
	template<class Iterator>
	bool operator==(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() == rhs.base();
	}

	template<class Iterator>
	bool operator!=(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() != rhs.base();
	}

	template<class Iterator>
	bool operator<(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() < rhs.base();
	}

	template<class Iterator>
	bool operator<=(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() <= rhs.base();
	}

	template<class Iterator>
	bool operator>(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() > rhs.base();
	}

	template<class Iterator>
	bool operator>=(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return lhs.base() >= rhs.base();
	}

	template<class Iterator>
	reverse_iterator<Iterator> operator+( typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& it)
	{
		return (it.base() + n);
	}

	template <class Iterator>
	reverse_iterator<Iterator> operator-(typename reverse_iterator<Iterator>::difference_type n,
			const reverse_iterator<Iterator> &it) {
	return (it.base() - n);
	}
}

#endif
