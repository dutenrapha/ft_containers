/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:27:56 by rdutenke          #+#    #+#             */
/*   Updated: 2022/04/30 23:46:18 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"
#include <vector>


void test_0(void)
{
	std::cout << "Test 0: Vector size 0"<< std::endl;
	std::vector<int> v1;
	std::vector<std::string> v2;
	std::vector<float, std::allocator<float> > v3;

	ft::vector<int> ft_v1;
	ft::vector<std::string> ft_v2;
	ft::vector<float, std::allocator<float> > ft_v3;
	
	std::cout << "v1,ft_v1 int"<< std::endl;
	std::cout << "v1.size() = " << v1.size() << std::endl;
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "v2,ft_v2 std::string"<< std::endl;
	std::cout << "v2.size() = " << v2.size() << std::endl;
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "v3,ft_v3 float"<< std::endl;
	std::cout << "v3.size() = " << v3.size() << std::endl;
	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_1(void)
{
	std::cout << "Test 1: Vector constructor"<< std::endl;
	std::vector<int> v1(10);
	std::vector<std::string> v2(10, "test");
	std::allocator<float> alloc;
	std::vector<float, std::allocator<float> > v3(10, 1.0f, alloc);

	ft::vector<int> ft_v1(10);
	ft::vector<std::string> ft_v2(10, "test");
	ft::vector<float, std::allocator<float> > ft_v3(10, 1.0f, alloc);

	std::cout << "v1,ft_v1 int"<< std::endl;
	std::cout << "v1.size() = " << v1.size() << std::endl;
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << "v1.capacity() = " << v1.capacity() << std::endl;
	std::cout << "ft_v1.capacity() = " << ft_v1.capacity() << std::endl;
	std::cout << std::endl;
		
	std::cout << "v2,ft_v2 std::string"<< std::endl;
	std::cout << "v2.size() = " << v2.size() << std::endl;
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << "v2.capacity() = " << v2.capacity() << std::endl;
	std::cout << "ft_v2.capacity() = " << ft_v2.capacity() << std::endl;
	std::cout << std::endl;
		
	std::cout << "v3,ft_v3 std::string"<< std::endl;
	std::cout << "v3.size() = " << v3.size() << std::endl;
	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << "v3.capacity() = " << v3.capacity() << std::endl;
	std::cout << "ft_v3.capacity() = " << ft_v3.capacity() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

int main(void)
{
	test_0();
	test_1();
	return (0);
}
