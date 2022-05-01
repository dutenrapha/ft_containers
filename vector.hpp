/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:59:45 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/02 00:57:16 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "iterator_traits.hpp"
#include "type_traits.hpp"
#include "random_access_iterator.hpp"
#include "reverse_iterator.hpp"
#include "algorithm.hpp"
#include <sstream>


namespace ft {
	
	template < class T, class Alloc = std::allocator<T> > 
	class vector
	{
		public:
			typedef T value_type;
			typedef Alloc allocator_type;
			typedef typename allocator_type::reference reference;
			typedef typename allocator_type::const_reference const_reference;
			typedef typename allocator_type::pointer pointer;
			typedef typename allocator_type::const_pointer const_pointer;
			typedef ft::random_access_iterator<value_type> iterator;
			typedef ft::random_access_iterator<const value_type> const_iterator;
			typedef ft::reverse_iterator<iterator> reverse_iterator;
			typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;
			typedef typename ft::iterator_traits<iterator>::difference_type difference_type;
			typedef std::size_t size_type;

			explicit vector (const allocator_type& alloc = allocator_type())
			{
				this->_size = 0;
				this->_capacity = 0;
				this->_alloc = alloc;
				this->_data = NULL;				
			}

			explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			{
				this->_size = n;
				this->_capacity = n;
				this->_alloc = alloc;
				this->_data = _alloc.allocate(_capacity * sizeof(value_type));	
					
				for (size_type i = 0; i < this->_size; i++)
					this->_alloc.construct(_data + i, val);
			}
  
			template <class InputIterator>
			vector(InputIterator first,
					InputIterator last,
					const allocator_type& alloc = allocator_type(),
					typename ft::enable_if<!ft::is_integral<InputIterator>::value, int>::type * = 0)
			{
				this->_size = last - first;
				this->_capacity = last - first;
				this->_alloc = alloc;
				this->_data = _alloc.allocate(_capacity * sizeof(value_type));
				for (size_type i = 0; i < this->_size; i++)
					this->_alloc.construct(_data + i, *(first + i));
			}

			vector(const vector& vec)
			{
				this->_size = vec._size;
				this->_capacity = vec._capacity;
				this->_alloc = vec._alloc;
				this->_data = this->_alloc.allocate(_capacity * sizeof(value_type));
				for (size_type i = 0; i < _size; i++) 
				{
      				_alloc.construct(_data + i, vec._data[i]);
    			}
			}

			~vector()
			{
				this->_alloc.deallocate(this->_data, this->_capacity);
			}

			vector &operator=(const vector &src) 
			{
				if (this != &src) 
				{
					if (_size != src._size) 
					{
						if (_data != NULL) 
						{
							for (size_type i = 0; i < _size; i++) 
							{
								_alloc.destroy(_data + i);
							}
							_alloc.deallocate(_data, _capacity * sizeof(value_type));
						}
						_size = src._size;
						_capacity = src._capacity;
						_data = _alloc.allocate(_capacity * sizeof(value_type));
					}
					for (size_type i = 0; i < _size; i++) 
					{
						_alloc.construct(_data + i, src._data[i]);
					}
				}
				return *this;
			}

			iterator begin(void)
			{ 
				return iterator(this->_data);
			}

			const_iterator begin(void) const
			{
				return const_iterator(this->_data);
			}

			iterator end(void) 
			{
				return iterator(this->_data + this->_size);
			}

			const_iterator end(void) const
			{
				return const_iterator(this->_data + this->_size);
			}

			reverse_iterator rbegin(void) 
			{
				return reverse_iterator(--this->end());
			}

			const_reverse_iterator rbegin(void) const
			{
				return const_reverse_iterator(--this->end());
			}
			
			reverse_iterator rend(void)
			{
				return reverse_iterator(--this->begin());
			}

			const_reverse_iterator rend(void) const
			{
				return const_reverse_iterator(--this->begin());
			}

			size_type size(void) const
			{
				return (this->_size);
			}

			size_type max_size(void) const
			{
				return _alloc.max_size();
			}

			void resize(size_type n, value_type val = value_type()) {
				if (n > this->_size) 
				{
					reserve(n);
					for (size_type i = this->_size; i < n; i++) 
					{
						_alloc.construct(this->_data + i, val);
					}
				} 
				else if (n < this->_size) 
				{
					for (size_type i = n; i < this->_size; i++) 
					{
						_alloc.destroy(this->_data + i);
					}
				}
				this->_size = n;
			}

			size_type capacity(void) const
			{
				return (this->_capacity);
			}

			bool empty() const
			{
				if (this->_size == 0)
				{
					return (true);
				}
				return (false);
			}

			void reserve(size_type n)
			{
				if (n > this->max_size())
				{
					throw std::length_error("ft::vector::reserve");
				}
				if (n > this->_capacity)
				{
					this->_capacity = n;
					pointer tmp = _alloc.allocate(this->_capacity * sizeof(value_type));
					for (size_type i = 0; i < this->_size; i++)
					{
						_alloc.construct(tmp + i, this->_data[i]);
					}
					for (size_type i = 0; i < this->_size; i++)
					{
						_alloc.destroy(this->_data + i);
					}
					_alloc.deallocate(this->_data, this->_size * sizeof(value_type));
					this->_data = tmp;
				}
			}

			reference operator[](size_type n)
			{
				return (this->_data[n]);
			}

			const_reference operator[](size_type n) const
			{
				return (this->_data[n]);
			}

			reference	at(size_type n)
			{
				_M_range_check(n);
				return (this->_data[n]);
			}

			const_reference at(size_type n) const 
			{
				_M_range_check(n);
				return (this->_data[n]); 
  			}

			reference	front(void)
			{
				return (this->_data[0]);
			}

			const_reference	front(void) const
			{
				return (this->_data[0]);
			}

			reference	back(void)
			{
				return (this->_data[this->_size - 1]);
			}

			const_reference	back(void) const
			{
				return (this->_data[this->_size - 1]);
			}

			template< class it >
			void assign(it first,
						it last,
						typename ft::enable_if<!ft::is_integral<it>::value, bool>::type = false)
			{
				if (this->_data)
				{
					this->_alloc.deallocate(this->_data, this->_capacity);
				}
				this->_size = last - first;
				if (this->_capacity < this->_size)
				{
					this->_capacity = this->_size;
				}
				this->_data = this->_alloc.allocate(this->_capacity);
				for (size_type i = 0; i < this->_size; i++)
				{
					this->_alloc.construct(&this->_data[i], *(first + i));
				}
			}
			

			void assign(size_type n, const value_type& val)
			{
				if (this->_data)
				{
					this->_alloc.deallocate(this->_data, this->_capacity);
				}
				this->_size = n;
				if (this->_capacity < this->_size)
				{
					this->_capacity = this->_size;
				}
				this->_data = this->_alloc.allocate(this->_capacity);
				for(size_type i = 0; i < this->_size; i++)
				{
					this->_data[i] = val;
				}
			}

			void push_back(const value_type &val)
			{
				if (this->_size == this->capacity())
				{
					this->reserve(this->capacity() ? this->capacity() * this->_growth_factor : 1);
				}
				_alloc.construct(&(*(this->begin() + this->size())), val);
				this->_size++;
			};

			void pop_back()
			{
				if (this->_size > 0)
				{
					_alloc.destroy(this->_data + this->_size - 1);
					this->_size--;
				} 
				else
				{
					throw std::out_of_range("ft::vector::pop_back");
				}
			};

			iterator insert(iterator position, const value_type &val)
			{
				size_type _offset = position - this->begin();
				if (this->_size == this->capacity())
				{
					this->reserve(this->capacity() * this->_growth_factor);
				}
				for (size_type i = this->_size; i > _offset; i--)
				{
					_alloc.construct(&(*this->begin()) + i, *(this->begin() + i - 1));
				}
				_alloc.construct(&(*this->begin()) + _offset, val);
				this->_size++;
				return iterator(this->begin() + _offset);
			}

			void insert(iterator position, size_type n, const value_type &val)
			{
				size_type _offset = position - this->begin();
				if (this->_size + n > this->capacity())
				{
					reserve(this->capacity() * this->_growth_factor);
				}
				for (size_type i = this->_size; i > _offset; i--)
				{
					_alloc.construct(&(*this->begin()) + i + n - 1, *(this->begin() + i - 1));
				}
				for (size_type i = 0; i < n; i++)
				{
					_alloc.construct(&(*this->begin()) + _offset + i, val);
				}
				_size += n;
			}

			template <class InputIterator>
			void insert(iterator position, InputIterator first, InputIterator last,
			typename ft::enable_if<!ft::is_integral<InputIterator>::value>::type * = 0)
			{
				size_type _offset = position - this->begin();
				size_type n = last - first;
				if (this->_size + n > this->_capacity) {
				reserve(this->capacity() * this->_growth_factor);
				}
				for (size_type i = this->_size; i > _offset; i--) {
				_alloc.construct(&(*this->begin()) + i + n - 1, *(this->begin() + i - 1));
				}
				for (size_type i = 0; i < n; i++) {
				_alloc.construct(&(*this->begin()) + _offset + i, *(first + i));
				}
				this->_size += n;
			};

			iterator erase(iterator position)
			{
				iterator iter = position;
				
				this->_alloc.destroy(&(*position));
				while (iter != (this->end() - 1))
				{
					this->_alloc.construct(&(*iter), *(++iter));
				}
				this->_size--;
				return position;
			};

			iterator erase(iterator first, iterator last)
			{
				if (this->size() == 0 || first >= this->end() || last < this->begin())
				{
					throw std::out_of_range("ft::vector::erase");
				}
				for (iterator it = first; it != last; it++)
				{
					_alloc.destroy(&(*it));
				}
				for (iterator it = last; it != this->end(); it++)
				{
					_alloc.construct(&(*(it - (last - first))), *it);
				}
				this->_size -= last - first;
				return first;
			};

			void swap(vector &x)
			{
				ft::swap(this->_data, x._data);
				ft::swap(this->_size, x._size);
				ft::swap(this->_capacity, x._capacity);
			};

			void clear(void)
			{
				for (iterator it = this->begin(); it != this->end(); ++it)
				{
					_alloc.destroy(&(*it));
				}
				this->_size = 0;
			};

			allocator_type get_allocator() const
			{
				return (this->_alloc);
			}

		private:
			value_type *_data;    
			size_type _size;      
			size_type _capacity;   
			allocator_type _alloc; 
			static const size_type _growth_factor = 2;

			void _M_range_check(size_type __n) const
			{
				if (__n >= size())
				{
					std::stringstream ss;
					ss << "vector::_M_range_check: __n (which is " << __n
						<< ") >= this->size() (which is " << size() << ")";
					throw std::out_of_range(ss.str());
				}
			}
	};

	template <class T, class Alloc>
	void swap(vector<T, Alloc> &x, vector<T, Alloc> &y)
	{
		x.swap(y);
	}

	template <class T, class Alloc>
	bool operator==(const vector<T, Alloc> &lhs, const vector<T, Alloc> &rhs)
	{
		if (lhs.size() != rhs.size()) 
		{
			return false;
		}
  		return ft::equal(lhs.begin(), lhs.end(), rhs.begin());
	}

	template <class T, class Alloc>
	bool operator != (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (!(lhs == rhs));
	}

	template <class T, class Alloc>
	bool operator < (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template <class T, class Alloc>
	bool operator <= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return ((lhs < rhs) || (lhs == rhs));
	}

	template <class T, class Alloc>
	bool operator > (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		if (lhs == rhs)
			return (false);
		return (!(lhs < rhs));
	}
	
	template <class T, class Alloc>
	bool operator >= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return ((lhs > rhs) || (lhs == rhs));
	}

	
}

#endif