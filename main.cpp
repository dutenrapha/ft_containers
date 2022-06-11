/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:27:56 by rdutenke          #+#    #+#             */
/*   Updated: 2022/06/11 04:17:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"
#include <vector>
#include "vector.hpp"
#include "map.hpp"
#include "pair.hpp"
#include "set.hpp"
#include <map>
#include <set>
#include <limits>

void	test_0(void)
{
	std::cout << "\033[1;31mTest 0: Vector Default Constructor \033[0m\n";
	std::cout << std::endl;
		
	std::vector<int> v1;
	std::vector<std::string> v2;
	std::vector<float, std::allocator<float> > v3;

	ft::vector<int> ft_v1;
	ft::vector<std::string> ft_v2;
	ft::vector<float, std::allocator<float> > ft_v3;
	
	std::cout << "\033[1;32mft::vector<int> ft_v1; \033[0m\n";
	std::cout << "v1,ft_v1 int"<< std::endl;
	std::cout << "  v1.size() = " << v1.size() << std::endl;
	std::cout << "  ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<std::string> ft_v2; \033[0m\n";
	std::cout << "v2,ft_v2 std::string"<< std::endl;
	std::cout << "  v2.size() = " << v2.size() << std::endl;
	std::cout << "  ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v3; \033[0m\n";
	std::cout << "v3,ft_v3 float"<< std::endl;
	std::cout << "  v3.size() = " << v3.size() << std::endl;
	std::cout << "  ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_1(void)
{
	std::cout << "\033[1;31mTest 1: Vector Fill Constructor \033[0m\n";
	std::cout << std::endl;
	
	std::vector<int> v1(10);
	std::vector<std::string> v2(10, "test");
	std::allocator<float> alloc;
	std::vector<float, std::allocator<float> > v3(10, 1.0f, alloc);

	ft::vector<int> ft_v1(10);
	ft::vector<std::string> ft_v2(10, "test");
	ft::vector<float, std::allocator<float> > ft_v3(10, 1.0f, alloc);
	
	std::cout << "\033[1;32mft::vector<int> ft_v1(10); \033[0m\n";
	std::cout << "v1,ft_v1 int"<< std::endl;
	std::cout << "  v1.size() = " << v1.size() << std::endl;
	std::cout << "  ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v1.capacity() = " << v1.capacity() << std::endl;
	std::cout << "  ft_v1.capacity() = " << ft_v1.capacity() << std::endl;
	std::cout << std::endl;
	std::cout << "  v1[0] = " << v1[0] << std::endl;
	std::cout << "  ft_v1[0] = " << ft_v1[0] << std::endl;
	std::cout << std::endl;
	std::cout << "  v1[9] = " << v1[9] << std::endl;
	std::cout << "  ft_v1[9] = " << ft_v1[9] << std::endl;
	std::cout << std::endl;	
	
	std::cout << "\033[1;32mft::vector<std::string> ft_v2(10, \"test\"); \033[0m\n";
	std::cout << "v2,ft_v2 std::string"<< std::endl;
	std::cout << "  v2.size() = " << v2.size() << std::endl;
	std::cout << "  ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v2.capacity() = " << v2.capacity() << std::endl;
	std::cout << "  ft_v2.capacity() = " << ft_v2.capacity() << std::endl;
	std::cout << std::endl;
	std::cout << "  v2[0] = " << v2[0] << std::endl;
	std::cout << "  ft_v2[0] = " << ft_v2[0] << std::endl;
	std::cout << std::endl;
	std::cout << "  v2[9] = " << v2[9] << std::endl;
	std::cout << "  ft_v2[9] = " << ft_v2[9] << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mstd::allocator<float> alloc; \033[0m\n";
	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v3(10, 1.0f, alloc); \033[0m\n";
	std::cout << "v3,ft_v3 float"<< std::endl;
	std::cout << "  v3.size() = " << v3.size() << std::endl;
	std::cout << "  ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v3.capacity() = " << v3.capacity() << std::endl;
	std::cout << "  ft_v3.capacity() = " << ft_v3.capacity() << std::endl;
	std::cout << std::endl;
	std::cout << "  v3[0] = " << v3[0] << std::endl;
	std::cout << "  ft_v3[0] = " << ft_v3[0] << std::endl;
	std::cout << std::endl;
	std::cout << "  v3[9] = " << v3[9] << std::endl;
	std::cout << "  ft_v3[9] = " << ft_v3[9] << std::endl;	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_2(void)
{
	std::cout << "\033[1;31mTest 2: Vector Range Constructor \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mstd::string arr2[] = {\"one\", \"two\", \"three\", \"four\", \"five\"}; \033[0m\n";
	std::cout << "\033[1;32mfloat arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}; \033[0m\n";
	std::cout << std::endl;
	
	int arr1[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"one", "two", "three", "four", "five"};
	float arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
	
	std::vector<int> v1(arr1, arr1 + 5);
	std::vector<std::string> v2(arr2, arr2 + 5);
	std::vector<float, std::allocator<float> > v3(arr3, arr3 + 5);
	
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<std::string> ft_v2(arr2, arr2 + 5);
	ft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5);
	
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "v1,ft_v1 int"<< std::endl;
	std::cout << "  v1.size() = " << v1.size() << std::endl;
	std::cout << "  ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v1.capacity() = " << v1.capacity() << std::endl;
	std::cout << "  ft_v1.capacity() = " << ft_v1.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v1[" << i << "] = " << v1[i] << std::endl;
		std::cout << "  ft_v1[" << i << "] = " << ft_v1[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft::vector<std::string> ft_v2(arr2, arr2 + 5); \033[0m\n";
	std::cout << "v2,ft_v2 std::string"<< std::endl;
	std::cout << "  v2.size() = " << v2.size() << std::endl;
	std::cout << "  ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v2.capacity() = " << v2.capacity() << std::endl;
	std::cout << "  ft_v2.capacity() = " << ft_v2.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v2[" << i << "] = " << v2[i] << std::endl;
		std::cout << "  ft_v2[" << i << "] = " << ft_v2[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5); \033[0m\n";
	std::cout << "v3,ft_v3 float"<< std::endl;
	std::cout << "  v3.size() = " << v3.size() << std::endl;
	std::cout << "  ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v3.capacity() = " << v3.capacity() << std::endl;
	std::cout << "  ft_v3.capacity() = " << ft_v3.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v3[" << i << "] = " << v3[i] << std::endl;
		std::cout << "  ft_v3[" << i << "] = " << ft_v3[i] << std::endl;
		std::cout << std::endl;
  	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_3(void)
{
	std::cout << "\033[1;31mTest 3: Test Vector Copy Constructor \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mstd::string arr2[] = {\"one\", \"two\", \"three\", \"four\", \"five\"}; \033[0m\n";
	std::cout << "\033[1;32mfloat arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}; \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string> ft_v2(arr2, arr2 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5); \033[0m\n";
	std::cout << std::endl;
	
	int arr1[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"one", "two", "three", "four", "five"};
	float arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

	std::vector<int> v1(arr1, arr1 + 5);
	std::vector<std::string> v2(arr2, arr2 + 5);
	std::vector<float, std::allocator<float> > v3(arr3, arr3 + 5);
	std::vector<int> v4(v1);
	std::vector<std::string> v5(v2);
	std::vector<float, std::allocator<float> > v6(v3);

	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<std::string> ft_v2(arr2, arr2 + 5);
	ft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5);
	ft::vector<int> ft_v4(ft_v1);
	ft::vector<std::string> ft_v5(ft_v2);
	ft::vector<float, std::allocator<float> > ft_v6(ft_v3);

	std::cout << "\033[1;32mft::vector<int> ft_v4(ft_v1); \033[0m\n";
	std::cout << "v4,ft_v4 int"<< std::endl;
	std::cout << "  v4.size() = " << v4.size() << std::endl;
	std::cout << "  ft_v4.size() = " << ft_v4.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v4.capacity() = " << v4.capacity() << std::endl;
	std::cout << "  ft_v4.capacity() = " << ft_v4.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v4[" << i << "] = " << v4[i] << std::endl;
		std::cout << "  ft_v4[" << i << "] = " << ft_v4[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft::vector<std::string> ft_v5(ft_v2); \033[0m\n";
	std::cout << "v5,ft_v5 std::string"<< std::endl;
	std::cout << "  v5.size() = " << v5.size() << std::endl;
	std::cout << "  ft_v5.size() = " << ft_v5.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v5.capacity() = " << v5.capacity() << std::endl;
	std::cout << "  ft_v5.capacity() = " << ft_v5.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v5[" << i << "] = " << v5[i] << std::endl;
		std::cout << "  ft_v5[" << i << "] = " << ft_v5[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v6(ft_v3); \033[0m\n";
	std::cout << "v6,ft_v6 float"<< std::endl;
	std::cout << "  v6.size() = " << v6.size() << std::endl;
	std::cout << "  ft_v6.size() = " << ft_v6.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  v6.capacity() = " << v6.capacity() << std::endl;
	std::cout << "  ft_v6.capacity() = " << ft_v6.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  v6[" << i << "] = " << v6[i] << std::endl;
		std::cout << "  ft_v6[" << i << "] = " << ft_v6[i] << std::endl;
		std::cout << std::endl;
  	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;		
}
	
void	test_4(void)
{
	std::cout << "\033[1;31mTest 4: Test Vector Destructor \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> *ft_v2 = new ft::vector<int>(ft_v1); \033[0m\n";
	std::cout << "\033[1;32mdelete ft_v2; \033[0m\n";			
	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int> *ft_v2 = new ft::vector<int>(ft_v1);
	delete ft_v2;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_5(void)
{
	std::cout << "\033[1;31mTest 5: Test Vector Assignment Operator \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mchar arr1[] = {'a', 'b', 'c', 'd', 'e'}; \033[0m\n";
	std::cout << "\033[1;32mstd::string arr2[] = {\"one\", \"two\", \"three\", \"four\", \"five\"}; \033[0m\n";
	std::cout << "\033[1;32mfloat arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f}; \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<char> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string> ft_v2(arr2, arr2 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<char> ft_v4; \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string> ft_v5; \033[0m\n";
	std::cout << "\033[1;32mft::vector<float, std::allocator<float> > ft_v6; \033[0m\n";
	



	std::cout << std::endl;

	char arr1[] = {'a', 'b', 'c', 'd', 'e'};
	std::string arr2[] = {"one", "two", "three", "four", "five"};
	float arr3[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

	ft::vector<char> ft_v1(arr1, arr1 + 5);
	ft::vector<std::string> ft_v2(arr2, arr2 + 5);
	ft::vector<float, std::allocator<float> > ft_v3(arr3, arr3 + 5);

	ft::vector<char> ft_v4;
	ft::vector<std::string> ft_v5;
	ft::vector<float, std::allocator<float> > ft_v6;

	ft::vector<int> ft_v7;
  	ft::vector<int> ft_v8;

	ft_v4 = ft_v1;
	ft_v5 = ft_v2;
	ft_v6 = ft_v3;

	std::cout << "\033[1;32mft_v4 = ft_v1; \033[0m\n";
	std::cout << "ft_v4 = ft_v1 char"<< std::endl;
	std::cout << "  ft_v4.size() = " << ft_v4.size() << std::endl;
	std::cout << "  ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  ft_v4.capacity() = " << ft_v4.capacity() << std::endl;
	std::cout << "  ft_v1.capacity() = " << ft_v1.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  ft_v4[" << i << "] = " << ft_v4[i] << std::endl;
		std::cout << "  ft_v1[" << i << "] = " << ft_v1[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft_v5 = ft_v2; \033[0m\n";
	std::cout << "ft_v5 = ft_v2 std::string"<< std::endl;
	std::cout << "  ft_v5.size() = " << ft_v5.size() << std::endl;
	std::cout << "  ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  ft_v5.capacity() = " << ft_v5.capacity() << std::endl;
	std::cout << "  ft_v2.capacity() = " << ft_v2.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  ft_v5[" << i << "] = " << ft_v5[i] << std::endl;
		std::cout << "  ft_v2[" << i << "] = " << ft_v2[i] << std::endl;
		std::cout << std::endl;
  	}

	std::cout << "\033[1;32mft_v6 = ft_v3; \033[0m\n";
	std::cout << "ft_v6 = ft_v3 float"<< std::endl;
	std::cout << "  ft_v6.size() = " << ft_v6.size() << std::endl;
	std::cout << "  ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << std::endl;
	std::cout << "  ft_v6.capacity() = " << ft_v6.capacity() << std::endl;
	std::cout << "  ft_v3.capacity() = " << ft_v3.capacity() << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "  ft_v6[" << i << "] = " << ft_v6[i] << std::endl;
		std::cout << "  ft_v3[" << i << "] = " << ft_v3[i] << std::endl;
		std::cout << std::endl;
  	}
	
	std::cout << "\033[1;32mft::vector<int> ft_v7; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v8; \033[0m\n";
	std::cout << "\033[1;32mft_v7 = ft_v8; \033[0m\n";
	ft_v7 = ft_v8;
	std::cout << "ft_v7 = ft_v8 int"<< std::endl;
	std::cout << "  ft_v7.size() = " << ft_v7.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_6(void)
{
	std::cout << "\033[1;31mTest 6: Test Vector Begin \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin(); \033[0m\n";
	std::cout << std::endl;
	
	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int>::iterator it = ft_v1.begin();

	std::cout << "*it = "<< *it  <<std::endl;
	std::cout << "ft_v1[0] = " << ft_v1[0] << std::endl;
	std::cout << "*it + 1 = " << *it + 1 << std::endl;
	std::cout << "ft_v1[1] = " << ft_v1[1] << std::endl;
	std::cout << std::endl;
		
	std::cout << "\033[1;32mstd::string arr2[] = {\"one\", \"two\", \"three\", \"four\", \"five\"}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string> ft_v2(arr2, arr2 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string>::iterator it2 = ft_v2.begin(); \033[0m\n";

	std::string arr2[] = {"one", "two", "three", "four", "five"};
	ft::vector<std::string> ft_v2(arr2, arr2 + 5);
	ft::vector<std::string>::iterator it2 = ft_v2.begin();

	std::cout << "*(it2 + 1) = "<< *(it2 + 1)  <<std::endl;
	std::cout << "ft_v2[1] = " << ft_v2[1] << std::endl;
	std::cout << "*it2 = " << *it2 << std::endl;
	std::cout << "ft_v2[0] = " << ft_v2[0] << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mint arr3[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> const v3(arr3, arr3 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::const_iterator cit = v3.begin(); \033[0m\n";

	int arr3[] = {1, 2, 3, 4, 5};
	ft::vector<int> const ft_v3(arr3, arr3 + 5);
	ft::vector<int>::const_iterator cit = ft_v3.begin();

	std::cout << "*cit = "<< *cit  <<std::endl;
	std::cout << "ft_v3[0] = " << ft_v3[0] << std::endl;
	std::cout << "*(cit + 1) = " << *(cit + 1) << std::endl;
	std::cout << "ft_v3[1] = " << ft_v3[1] << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_7(void)
{
	std::cout << "\033[1;31mTest 7: Test Vector End \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.end(); \033[0m\n";
	std::cout << std::endl;
	
	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int>::iterator it = ft_v1.end();

	std::cout << "*it = "<< *it  <<std::endl;
	std::cout << "ft_v1[5] = " << ft_v1[5] << std::endl;
	std::cout << "*(it - 1) = " << *(it - 1) << std::endl;
	std::cout << "ft_v1[4] = " << ft_v1[4] << std::endl;
	std::cout << std::endl;
		
	std::cout << "\033[1;32mstd::string arr2[] = {\"one\", \"two\", \"three\", \"four\", \"five\"}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string> ft_v2(arr2, arr2 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<std::string>::iterator it2 = ft_v2.begin(); \033[0m\n";

	std::string arr2[] = {"one", "two", "three", "four", "five"};
	ft::vector<std::string> ft_v2(arr2, arr2 + 5);
	ft::vector<std::string>::iterator it2 = ft_v2.end();

	std::cout << "*(it2 - 1) = "<< *(it2 - 1)  <<std::endl;
	std::cout << "ft_v2[4] = " << ft_v2[4] << std::endl;
	std::cout << "*(it2 - 2) = " << *(it2 - 2) << std::endl;
	std::cout << "ft_v2[3] = " << ft_v2[3] << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mint arr3[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> const v3(arr3, arr3 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::const_iterator cit = v3.end(); \033[0m\n";

	int arr3[] = {1, 2, 3, 4, 5};
	ft::vector<int> const ft_v3(arr3, arr3 + 5);
	ft::vector<int>::const_iterator cit = ft_v3.end();

	std::cout << "*(cit - 1) = "<< *(cit - 1)  <<std::endl;
	std::cout << "ft_v3[4] = " << ft_v3[4] << std::endl;
	std::cout << "*(cit - 2) = " << *(cit - 2) << std::endl;
	std::cout << "ft_v3[3] = " << ft_v3[3] << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_8(void)
{
	std::cout << "\033[1;31mTest 8: Test Vector RBegin \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator eit = ft_v1.end(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::reverse_iterator rit = ft_v1.rbegin(); \033[0m\n";
	std::cout << std::endl;

	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int>::iterator it = ft_v1.begin();
	ft::vector<int>::iterator eit = ft_v1.end();
	ft::vector<int>::reverse_iterator ritb = ft_v1.rbegin();

	std::cout << "*ritb = " << *ritb  <<std::endl;
	std::cout << "ft_v1[4] = " << ft_v1[4] << std::endl;
	std::cout << std::endl;

  	for (int i = 0; i < 5; ++i)
	{
		std::cout << "*ritb = " << *ritb  <<std::endl;
		std::cout << "*(eit - 1 - "<< i <<") = " << *(eit - 1 - i) <<std::endl;
		std::cout << "*(it + 4 - "<< i <<") = " << *(it + 4 - i) <<std::endl;
		std::cout << std::endl;
		++ritb;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_9(void)
{
	std::cout << "\033[1;31mTest 9: Test Vector REnd \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator eit = ft_v1.end(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::reverse_iterator ritb = ft_v1.rbegin(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::reverse_iterator rite = ft_v1.rend(); \033[0m\n";
	std::cout << std::endl;

	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int>::iterator it = ft_v1.begin();
	ft::vector<int>::iterator eit = ft_v1.end();
	ft::vector<int>::reverse_iterator ritb = ft_v1.rbegin();
	ft::vector<int>::reverse_iterator rite = ft_v1.rend();


	std::cout << "*(rite - 1)= " << *(rite - 1)  << std::endl;
	std::cout << "*it = " << *it  << std::endl;
	std::cout << std::endl;
	unsigned int i = 0;
	for (ritb = ft_v1.rbegin(); ritb != ft_v1.rend(); ++ritb)
	{
		std::cout << "*ritb = " << *ritb  <<std::endl;
		std::cout << "ft_v1[" << 4 - i << "] = ";
		std::cout << ft_v1[4 - i++] << std::endl;
		std::cout << std::endl;
  	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_10(void)
{
	std::cout << "\033[1;31mTest 10: Test Vector Size \033[0m\n";
	std::cout << std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v0; \033[0m\n";
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v2(5); \033[0m\n";
	
	ft::vector<int> ft_v0;
	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);
	ft::vector<int> ft_v2(5);
	
	std::cout << "ft_v0.size() = " << ft_v0.size()  << std::endl;
	std::cout << "ft_v1.size() " << ft_v1.size()  << std::endl;
	std::cout << "ft_v2.size() " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_11(void)
{
	std::cout << "\033[1;31mTest 11: Test Vector MaxSize \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mstd::allocator<int> alloc; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v0(alloc); \033[0m\n";
	std::cout << "\033[1;32mstd::allocator<int> alloc2; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(5, 42, alloc2); \033[0m\n";
	std::cout << std::endl;
	
	std::allocator<int> alloc;
	ft::vector<int> ft_v0(alloc);

	std::allocator<int> alloc2;
  	ft::vector<int> ft_v1(5, 42, alloc2);

	std::cout << "ft_v0.max_size() = " << ft_v0.max_size()  << std::endl;
	std::cout << "alloc.max_size() =  " << alloc.max_size()  << std::endl;
	std::cout << std::endl;
	
	std::cout << "ft_v1.max_size() = " << ft_v1.max_size()  << std::endl;
	std::cout << "alloc2.max_size() =  " << alloc2.max_size()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;33mft_v1.size() <= ft_v1.max_size()  \033[0m\n" << std::endl;
	std::cout << "ft_v1.size() = " << ft_v1.size()  << std::endl;
	std::cout << "ft_v1.max_size() =  " << ft_v1.max_size()  << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_12(void)
{
	std::cout << "\033[1;31mTest 12: Test Vector Resize \033[0m\n"<< std::endl;
	
	ft::vector<int> ft_v0;
	std::cout << "\033[1;32mft::vector<int> ft_v0; \033[0m\n";
	std::cout << "ft_v0.size() = " << ft_v0.size()  << std::endl;
	std::cout << std::endl;

	ft_v0.resize(12);
	std::cout << "\033[1;32mft_v0.resize(12); \033[0m\n";
	std::cout << "ft_v0.size() = " << ft_v0.size()  << std::endl;
	std::cout << "ft_v0[0] = " << ft_v0[0]  << std::endl;
	std::cout << std::endl;
	
	ft_v0.resize(0);
	std::cout << "\033[1;32mft_v0.resize(0); \033[0m\n";
	std::cout << "ft_v0.size() = " << ft_v0.size()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mfor (int i = 1; i < 10; ++i) \033[0m\n";
	std::cout << "\033[1;32m{ \033[0m\n";
	std::cout << "\033[1;32m	ft_v0.push_back(i); \033[0m\n";
	std::cout << "\033[1;32m} \033[0m\n";
	std::cout << "\033[1;32mft_v0.resize(5); \033[0m\n";
	std::cout << "\033[1;32mft_v0.resize(8, 100); \033[0m\n";
	std::cout << "\033[1;32mft_v0.resize(12); \033[0m\n"<< std::endl;

	for (int i = 1; i < 10; ++i)
	{
    	ft_v0.push_back(i);
	}
	ft_v0.resize(5);
	ft_v0.resize(8, 100);
	ft_v0.resize(12);
		
	std::cout << "ft_v0.size() = " << ft_v0.size()  << std::endl;
	for (int i = 0; i < 12; ++i)
	{
    	std::cout << "ft_v0["<< i << "] = " << ft_v0[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_13(void)
{
	std::cout << "\033[1;31mTest 13: Test Vector Capacity \033[0m\n"<< std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v0; \033[0m\n";
	ft::vector<int> ft_v0;
	std::cout << "ft_v0.capacity() = " << ft_v0.capacity()  << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> v1(5); \033[0m\n";
	ft::vector<int> ft_v1(5);
	std::cout << "ft_v1.capacity() = " << ft_v1.capacity()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> v2(12, 42); \033[0m\n";
	ft::vector<int> ft_v2(12, 42);
	std::cout << "ft_v2.capacity() = " << ft_v2.capacity()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft_v2.push_back(42); \033[0m\n";
	ft_v2.push_back(42);
	std::cout << "ft_v2.capacity() = " << ft_v2.capacity()  << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_14(void)
{
	std::cout << "\033[1;31mTest 14: Test Vector Reserve \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v0; \033[0m\n";
	ft::vector<int> ft_v0;
	std::cout << "ft_v0.capacity() = " << ft_v0.capacity()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft_v0.reserve(32); \033[0m\n";
	ft_v0.reserve(32);
	std::cout << "ft_v0.capacity() = " << ft_v0.capacity()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> ft_v1(41); \033[0m\n";
	ft::vector<int> ft_v1(41);
	std::cout << "ft_v1.capacity() = " << ft_v1.capacity()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft_v1.reserve(12); \033[0m\n";
	ft_v1.reserve(12);
	std::cout << "ft_v1.capacity() = " << ft_v1.capacity()  << std::endl;
	std::cout << std::endl;	
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_15(void)
{
	std::cout << "\033[1;31mTest 15: Test Vector ElementAccess \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft_v1.reserve(56); \033[0m\n";
	std::cout << std::endl;

	int arr1[] = {1, 2, 3, 4, 5};
  	ft::vector<int> ft_v1(arr1, arr1 + 5);
	 

	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout << "\033[1;32mft_v1["<< i <<"] = "<< i + 42 <<"\033[0m\n";
		ft_v1[i] = i + 42;
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
		std::cout << std::endl;	
	}

	std::cout << "\033[1;32mft::vector<int> const ft_v2(arr1, arr1 + 5); \033[0m\n";
	ft::vector<int> const ft_v2(arr1, arr1 + 5);
	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v2["<< i <<"] = " << ft_v2[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "ft_v1.size() = " << ft_v1.size()  << std::endl;
	std::cout << std::endl;	
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_16(void)
{
	std::cout << "\033[1;31mTest 16: Test Vector At \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << std::endl;
	
	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);

	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v1.at("<< i <<") = " << ft_v1.at(i)  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[1;32mft::vector<int> const ft_v2(arr1, arr1 + 5); \033[0m\n";
	std::cout << std::endl;
	
	ft::vector<int> const ft_v2(arr1, arr1 + 5);

	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v2.at("<< i <<") = " << ft_v2.at(i)  << std::endl;
	}
	std::cout << std::endl;	
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_17(void)
{
	std::cout << "\033[1;31mTest 17: Test Vector Front \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";

	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);

	std::cout << "ft_v1.front() = " << ft_v1.front()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> const ft_v2(arr1, arr1 + 5); \033[0m\n";
	
	ft::vector<int> const ft_v2(arr1, arr1 + 5);
	std::cout << "ft_v2.front() = " << ft_v2.front()  << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_18(void)
{
	std::cout << "\033[1;31mTest 18: Test Vector Back \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	

	int arr1[] = {1, 2, 3, 4, 5};
	ft::vector<int> ft_v1(arr1, arr1 + 5);

	std::cout << "ft_v1.back() = " << ft_v1.back()  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> const ft_v2(arr1, arr1 + 5); \033[0m\n";

	
	ft::vector<int> const ft_v2(arr1, arr1 + 5);
	std::cout << "ft_v2.back() = " << ft_v2.back()  << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_19(void)
{
	std::cout << "\033[1;31mTest 19: Test Vector Assign \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1; \033[0m\n";
	std::cout << "\033[1;32mft_v1.assign(7, 100); \033[0m\n";

	ft::vector<int> ft_v1;
	ft_v1.assign(7, 100);
	for (int i = 0; i < 7; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v2; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin() + 1; \033[0m\n";
	std::cout << "\033[1;32mft_v2.assign(it, ft_v1.end() - 1); \033[0m\n";
	std::cout << std::endl;
	
	ft::vector<int> ft_v2;
	ft::vector<int>::iterator it = ft_v1.begin() + 1;
	ft_v2.assign(it, ft_v1.end() - 1); 
	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v2["<< i <<"] = " << ft_v2[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;32mint myints[] = {1776, 7, 4}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v3; \033[0m\n";
	std::cout << "\033[1;32mft_v3.assign(myints, myints + 3); \033[0m\n";
	std::cout << std::endl;
	
	ft::vector<int> ft_v3;
	int myints[] = {1776, 7, 4};
	ft_v3.assign(myints, myints + 3); 
	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	for (int i = 0; i < 3; ++i)
	{
    	std::cout << "ft_v3["<< i <<"] = " << ft_v3[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_20(void)
{
	std::cout << "\033[1;31mTest 20: Test Vector PushBack \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1; \033[0m\n";
	std::cout << "\033[1;32mft_v1.push_back(42); \033[0m\n";

	ft::vector<int> ft_v1;
  	ft_v1.push_back(42);

	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << "ft_v1[0] = " << ft_v1[0] << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> ft_v2(5); \033[0m\n";
	std::cout << "\033[1;32mft_v2.push_back(42); \033[0m\n";

	ft::vector<int> ft_v2(5);
  	ft_v2.push_back(42);

	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	for (int i = 0; i < 6; ++i)
	{
    	std::cout << "ft_v2["<< i <<"] = " << ft_v2[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v3(12, 42); \033[0m\n";
	std::cout << "\033[1;32mft_v3.push_back(43); \033[0m\n";
	
	ft::vector<int> ft_v3(12, 42);
  	ft_v3.push_back(43);

	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	for (int i = 0; i < 13; ++i)
	{
    	std::cout << "ft_v3["<< i <<"] = " << ft_v3[i]  << std::endl;
	}
	
	std::cout << "----------------------------------------------" << std::endl; 
}

void	test_21(void)
{
	std::cout << "\033[1;31mTest 21: Test Vector PopBack \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(5); \033[0m\n";
	std::cout << "\033[1;32mft_v1.pop_back(); \033[0m\n";

	ft::vector<int> ft_v1(5);
	ft_v1.pop_back();
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v2(12, 42); \033[0m\n";
	std::cout << "\033[1;32mft_v2.pop_back(); \033[0m\n";
	
	ft::vector<int> ft_v2(12, 42);
  	ft_v2.pop_back();
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl; 
}

void	test_22(void)
{
	std::cout << "\033[1;31mTest 22: Test Vector Insert \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(3, 100); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mit = ft_v1.insert(it, 200); \033[0m\n";

	ft::vector<int> ft_v1(3, 100);
	ft::vector<int>::iterator it = ft_v1.begin();
	it = ft_v1.insert(it, 200);
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 4; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft_v1.insert(it, 2, 300); \033[0m\n";
	ft_v1.insert(it, 2, 300);
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 6; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\033[1;32mit = v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v2(2, 400); \033[0m\n";
	std::cout << "\033[1;32mft_v1.insert(it + 2, ft_v2.begin(), ft_v2.end()); \033[0m\n";
	
	it = ft_v1.begin();
	ft::vector<int> ft_v2(2, 400);
	ft_v1.insert(it + 2, ft_v2.begin(), ft_v2.end());
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 8; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\033[1;32mint arr1[] = {501, 502, 503}; \033[0m\n";
	std::cout << "\033[1;32mft_v1.insert(ft_v1.begin(), arr1, arr1 + 3); \033[0m\n";
	
	int arr1[] = {501, 502, 503};
	ft_v1.insert(ft_v1.begin(), arr1, arr1 + 3);
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 11; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v3(2, 500); \033[0m\n";
	std::cout << "\033[1;32mft_v3.insert(ft_v3.begin() + 1, 250); \033[0m\n";

	ft::vector<int> ft_v3(2, 500);
	ft_v3.insert(ft_v3.begin() + 1, 250);
	
	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	for (int i = 0; i < 3; ++i)
	{
    	std::cout << "ft_v3["<< i <<"] = " << ft_v3[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl; 
}

void	test_23(void)
{
	std::cout << "\033[1;31mTest 23: Test Vector Erase \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int>::iterator it = ft_v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mit = v1.erase(it + 2); \033[0m\n";
	
	int arr1[] = {1, 2, 3, 4, 5};
  	ft::vector<int> ft_v1(arr1, arr1 + 5);
  	ft::vector<int>::iterator it = ft_v1.begin();

	it = ft_v1.erase(it + 2);
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 4; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\033[1;32mit = v1.begin(); \033[0m\n";
	std::cout << "\033[1;32mit = v1.erase(it + 1, v1.end()); \033[0m\n";

	it = ft_v1.begin();
	it = ft_v1.erase(it + 1, ft_v1.end());
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << "ft_v1[0] = " << ft_v1[0]  << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;32mft::vector<int> ft_v2(3, 200); \033[0m\n";
	std::cout << "\033[1;32mit = ft_v2.begin(); \033[0m\n";
	std::cout << "\033[1;32mit = ft_v2.erase(it, it + 2); \033[0m\n";

	ft::vector<int> ft_v2(3, 200);
  	it = ft_v2.begin();
  	it = ft_v2.erase(it, it + 2);
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	std::cout << "ft_v2[0] = " << ft_v2[0]  << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft::vector<int> ft_v3(3, 300); \033[0m\n";
	std::cout << "\033[1;32mit = ft_v3.begin(); \033[0m\n";
	std::cout << "\033[1;32mit = ft_v3.erase(it + 1); \033[0m\n";

	ft::vector<int> ft_v3(3, 300);
 	it = ft_v3.begin();
 	it = ft_v3.erase(it + 1);

	std::cout << "ft_v3.size() = " << ft_v3.size() << std::endl;
	std::cout << "ft_v3[0] = " << ft_v3[0]  << std::endl;
	std::cout << "ft_v3[1] = " << ft_v3[1]  << std::endl;
	std::cout << std::endl;	
	std::cout << "----------------------------------------------" << std::endl; 		
}

void	test_24(void)
{
	std::cout << "\033[1;31mTest 24: Test Vector Swap \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(3, 100); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v2(5, 200); \033[0m\n";
	std::cout << "\033[1;32mft_v1.swap(ft_v2); \033[0m\n";

	ft::vector<int> ft_v1(3, 100);
  	ft::vector<int> ft_v2(5, 200);
  	ft_v1.swap(ft_v2);

	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	for (int i = 0; i < 3; ++i)
	{
    	std::cout << "ft_v2["<< i <<"] = " << ft_v2[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_25(void)
{
	std::cout << "\033[1;31mTest 25: Test Vector Clear \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1; \033[0m\n";
	std::cout << "\033[1;32mft_v1.push_back(100); \033[0m\n";
	std::cout << "\033[1;32mft_v1.push_back(200); \033[0m\n";
	std::cout << "\033[1;32mft_v1.push_back(300); \033[0m\n";
				
	
	ft::vector<int> ft_v1;
	ft_v1.push_back(100);
	ft_v1.push_back(200);
	ft_v1.push_back(300);

	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 3; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\033[1;32mft_v1.clear();\033[0m\n";
	ft_v1.clear();
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;32mft_v1.push_back(1101); \033[0m\n";
	std::cout << "\033[1;32mft_v1.push_back(2202); \033[0m\n";

	ft_v1.push_back(1101);
  	ft_v1.push_back(2202);
	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 2; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	
}

void	test_26(void)
{
	std::cout << "\033[1;31mTest 26: Test Vector GetAllocator \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1; \033[0m\n";
	std::cout << "\033[1;32mint *p; \033[0m\n";
	std::cout << "\033[1;32munsigned int i; \033[0m\n";
	std::cout << "\033[1;32mp = ft_v1.get_allocator().allocate(5); \033[0m\n";
	std::cout << "\033[1;32mfor (i = 0; i < 5; i++) \033[0m\n";
	std::cout << "\033[1;32m{ \033[0m\n";
	std::cout << "\033[1;32m	ft_v1.get_allocator().construct(&p[i], i + 1000); \033[0m\n";
	std::cout << "\033[1;32m} \033[0m\n";
	std::cout << "\033[1;32mfor (i = 0; i < 5; i++) \033[0m\n";
	std::cout << "\033[1;32m{ \033[0m\n";
	std::cout << "\033[1;32m	std::cout << \"p[\"<< i <<\"] = \" << p[i]  << std::endl; \033[0m\n";
	std::cout << "\033[1;32m} \033[0m\n";
	
	std::cout << std::endl;
	
	ft::vector<int> ft_v1;
	int *p;
	unsigned int i;
	p = ft_v1.get_allocator().allocate(5);

	for (i = 0; i < 5; i++)
	{
    	ft_v1.get_allocator().construct(&p[i], i + 1000);
  	}
	
  	for (i = 0; i < 5; i++)
	{
    	std::cout << "p["<< i <<"] = " << p[i]  << std::endl;
  	}
	  
  	for (i = 0; i < 5; i++)
	{
   		ft_v1.get_allocator().destroy(&p[i]);
  	}
  	ft_v1.get_allocator().deallocate(p, 5);
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_27(void)
{
	std::cout << "\033[1;31mTest 27: Test Vector Relational Operators \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(3, 100); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v2(3, 100); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v3(2, 200); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v4(3, 300); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v5(3, 400); \033[0m\n";
	std::cout << std::endl;
	
	ft::vector<int> ft_v1(3, 100);
  	ft::vector<int> ft_v2(3, 100);
 	ft::vector<int> ft_v3(2, 200);
 	ft::vector<int> ft_v4(3, 300);
 	ft::vector<int> ft_v5(3, 400);

	if (ft_v1 == ft_v2)
		std::cout << "ft_v1 == ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 == ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 == ft_v3)
		std::cout << "ft_v1 == ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 == ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 == ft_v4)
		std::cout << "ft_v1 == ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 == ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 == ft_v5)
		std::cout << "ft_v1 == ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 == ft_v5 ? -> FALSE"<< std::endl;
	std::cout << std::endl;


	if (ft_v1 != ft_v2)
		std::cout << "ft_v1 != ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 != ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 != ft_v3)
		std::cout << "ft_v1 != ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 != ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 != ft_v4)
		std::cout << "ft_v1 != ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 != ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 != ft_v5)
		std::cout << "ft_v1 != ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 != ft_v5 ? -> FALSE"<< std::endl;	
  	std::cout << std::endl;


	if (ft_v1 < ft_v2)
		std::cout << "ft_v1 < ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 < ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 < ft_v3)
		std::cout << "ft_v1 < ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 < ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 < ft_v4)
		std::cout << "ft_v1 < ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 < ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 < ft_v5)
		std::cout << "ft_v1 < ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 < ft_v5 ? -> FALSE"<< std::endl;	
  	std::cout << std::endl;


	if (ft_v1 <= ft_v2)
		std::cout << "ft_v1 <= ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 <= ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 <= ft_v3)
		std::cout << "ft_v1 <= ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 <= ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 <= ft_v4)
		std::cout << "ft_v1 <= ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 <= ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 <= ft_v5)
		std::cout << "ft_v1 <= ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 <= ft_v5 ? -> FALSE"<< std::endl;	
  	std::cout << std::endl;


	if (ft_v1 > ft_v2)
		std::cout << "ft_v1 > ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 > ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 > ft_v3)
		std::cout << "ft_v1 > ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 > ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 > ft_v4)
		std::cout << "ft_v1 > ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 > ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 > ft_v5)
		std::cout << "ft_v1 > ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 > ft_v5 ? -> FALSE"<< std::endl;	
  	std::cout << std::endl;


	if (ft_v1 >= ft_v2)
		std::cout << "ft_v1 >= ft_v2 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 >= ft_v2 ? -> FALSE"<< std::endl;

	if (ft_v1 >= ft_v3)
		std::cout << "ft_v1 >= ft_v3 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 >= ft_v3 ? -> FALSE"<< std::endl;

	if (ft_v1 >= ft_v4)
		std::cout << "ft_v1 >= ft_v4 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 >= ft_v4 ? -> FALSE"<< std::endl;

	if (ft_v1 >= ft_v5)
		std::cout << "ft_v1 >= ft_v5 ? -> TRUE"<< std::endl;
	else
		std::cout << "ft_v1 >= ft_v5 ? -> FALSE"<< std::endl;	
  	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void	test_28(void)
{
	std::cout << "\033[1;31mTest 28: Test Vector Swap Overload \033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> ft_v1(3, 100); \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> ft_v2(5, 200); \033[0m\n";
	std::cout << "\033[1;32mft::swap(ft_v1, ft_v2); \033[0m\n";

	ft::vector<int> ft_v1(3, 100);
	ft::vector<int> ft_v2(5, 200); 
	ft::swap(ft_v1, ft_v2);

	std::cout << "ft_v1.size() = " << ft_v1.size() << std::endl;
	for (int i = 0; i < 5; ++i)
	{
    	std::cout << "ft_v1["<< i <<"] = " << ft_v1[i]  << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "ft_v2.size() = " << ft_v2.size() << std::endl;
	for (int i = 0; i < 3; ++i)
	{
    	std::cout << "ft_v2["<< i <<"] = " << ft_v2[i]  << std::endl;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_29(void)
{
	std::cout << "\033[1;31mTest 29: Test pair and make_pair\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::pair <std::string,double> product1; \033[0m\n";
	std::cout << "\033[1;32mft::pair <std::string,double> product2 (\"tomatoes\",2.30); \033[0m\n";
	std::cout << "\033[1;32mft::pair <std::string,double> product3 (product2); \033[0m\n";
	std::cout << "\033[1;32mproduct1 = ft::make_pair(std::string(\"lightbulbs\"),0.99); \033[0m\n";

	ft::pair <std::string,double> product1;                     // default constructor
  	ft::pair <std::string,double> product2 ("tomatoes",2.30);   // value init
  	ft::pair <std::string,double> product3 (product2);          // copy constructor

	if (product2 == product3)
		std::cout << "product2 == product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 == product3 ? -> FALSE"<< std::endl;
	std::cout << "\033[1;32mproduct2.first = \"shoes\"; \033[0m\n";
	std::cout << "\033[1;32mproduct2.second = 39.90;  \033[0m\n";

	product1 = ft::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)
	product2.first = "shoes";                  // the type of first is string
	product2.second = 39.90;                   // the type of second is double
	
	if (product2 == product3)
		std::cout << "product2 == product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 == product3 ? -> FALSE"<< std::endl;
	
	if (product2 != product3)
		std::cout << "product2 != product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 != product3 ? -> FALSE"<< std::endl;

	if (product2 <= product3)
		std::cout << "product2 <= product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 <= product3 ? -> FALSE"<< std::endl;

	if (product2 < product3)
		std::cout << "product2 < product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 < product3 ? -> FALSE"<< std::endl;	

	if (product2 >= product3)
		std::cout << "product2 >= product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 >= product3 ? -> FALSE"<< std::endl;

	if (product2 > product3)
		std::cout << "product2 > product3 ? -> TRUE"<< std::endl;
	else
		std::cout << "product2 > product3 ? -> FALSE"<< std::endl;
	
	std::cout << "The price of " << product1.first << " is $" << product1.second <<  std::endl;
	std::cout << "The price of " << product2.first << " is $" << product2.second <<  std::endl;
  	std::cout << "The price of " << product3.first << " is $" << product3.second <<  std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_30(void)
{
	std::cout << "\033[1;31mTest 30: Test Map Default Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<int, int> ft_map; \033[0m\n";
	
	ft::map<int, int> ft_map;
	std::cout << "\033[1;32mft_map.size() = \033[0m" << ft_map.size() <<  std::endl;
	std::cout << "\033[1;32mft_map.empty() = \033[0m" << ft_map.empty() <<  std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_31(void)
{
	std::cout << "\033[1;31mTest 31: Test Map Range Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mstd::vector<ft::pair<char, int>> v; \033[0m\n";
	std::cout << "\033[1;32mv.push_back(ft::pair<char, int>('a', 2)); \033[0m\n";
	std::cout << "\033[1;32mv.push_back(ft::pair<char, int>('b', 4)); \033[0m\n";
	std::cout << "\033[1;32mv.push_back(ft::pair<char, int>('c', 6)); \033[0m\n";
	std::vector<ft::pair<char, int> > v;
	v.push_back(ft::pair<char, int>('a', 2));
  	v.push_back(ft::pair<char, int>('b', 4));
  	v.push_back(ft::pair<char, int>('c', 6));
	  
	std::cout << "\033[1;32mft::map<char, int> ft_map(v.begin(), v.end()); \033[0m\n";
	ft::map<char, int> ft_map(v.begin(), v.end());

	std::cout << "\033[1;32mft_map.size() = \033[0m" << ft_map.size() <<  std::endl;
	std::cout << "\033[1;32mft_map['a'] = \033[0m" << ft_map['a'] <<  std::endl;	
	std::cout << "\033[1;32mft_map['b'] = \033[0m" << ft_map['b'] <<  std::endl;		
	std::cout << "\033[1;32mft_map['c'] = \033[0m" << ft_map['c'] <<  std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_32(void)
{
	std::cout << "\033[1;31mTest 32: Test Map Copy Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	std::cout << "\033[1;32mft::map<char, int> mymap(MapChar); \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;
	
	ft::map<char, int> mymap(MapChar);

	std::cout << "\033[1;32mmymap.size() = \033[0m" << mymap.size() <<  std::endl;
	std::cout << "\033[1;32mmymap['a'] = \033[0m" << mymap['a'] <<  std::endl;	
	std::cout << "\033[1;32mmymap['b'] = \033[0m" << mymap['b'] <<  std::endl;		
	std::cout << "\033[1;32mmymap['c'] = \033[0m" << mymap['c'] <<  std::endl;
	std::cout << "\033[1;32mmymap['b'] = \033[0m" << mymap['d'] <<  std::endl;		
	std::cout << "\033[1;32mmymap['c'] = \033[0m" << mymap['e'] <<  std::endl;		
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_33(void)
{
	std::cout << "\033[1;31mTest 33: Test Map Assignment Operator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;

	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap = MapChar; \033[0m\n";
	ft::map<char, int> mymap;
 	mymap = MapChar;

	std::cout << "\033[1;32mmymap.size() = \033[0m" << mymap.size() <<  std::endl;
	std::cout << "\033[1;32mmymap['a'] = \033[0m" << mymap['a'] <<  std::endl;	
	std::cout << "\033[1;32mmymap['b'] = \033[0m" << mymap['b'] <<  std::endl;		
	std::cout << "\033[1;32mmymap['c'] = \033[0m" << mymap['c'] <<  std::endl;
	std::cout << "\033[1;32mmymap['b'] = \033[0m" << mymap['d'] <<  std::endl;		
	std::cout << "\033[1;32mmymap['c'] = \033[0m" << mymap['e'] <<  std::endl;		
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_34(void)
{
	std::cout << "\033[1;31mTest 34: Test Map Begin\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;

	std::cout << "\033[1;32mft::map<char, int> mymap(MapChar); \033[0m\n";
	ft::map<char, int> mymap(MapChar);

	std::cout << "\033[1;32mmymap.begin()->first \033[0m" << mymap.begin()->first <<  std::endl;		
	std::cout << "\033[1;32mmymap.begin()->second \033[0m" << mymap.begin()->second <<  std::endl;	

	ft::map<char, int>::iterator it = mymap.begin();
	char c = 'a';
	for (; it != mymap.end(); ++it) {
		std::cout << "\033[1;32mExpected: \033[0m" << c << "\033[1;32m, Realized it->first: \033[0m" << it->first << std::endl;
		std::cout << "\033[1;32mExpected MapChar["<< c <<"]: \033[0m" << MapChar[c] << "\033[1;32m, Realized it->second: \033[0m" << it->second << std::endl;
		c++;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_35(void)
{
	std::cout << "\033[1;31mTest 35: Test Map End\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;

	std::cout << "\033[1;32mft::map<char, int> mymap(MapChar); \033[0m\n";
	ft::map<char, int> mymap(MapChar);
	
	ft::map<char, int>::iterator it = mymap.end();
	it--;
	std::cout << "\033[1;32mft::map<char, int>::iterator it = mymap.end(); \033[0m\n";
	std::cout << "\033[1;32mit->first \033[0m" << it->first <<  std::endl;		
	std::cout << "\033[1;32mit->second \033[0m" << it->second <<  std::endl;	

	char c = 'e';
	for (; it != mymap.begin(); --it) {
		std::cout << "\033[1;32mExpected: \033[0m" << c << "\033[1;32m, Realized it->first: \033[0m" << it->first << std::endl;
		std::cout << "\033[1;32mExpected MapChar["<< c <<"]: \033[0m" << MapChar[c] << "\033[1;32m, Realized it->second: \033[0m" << it->second << std::endl;
		c--;
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_36(void)
{
	std::cout << "\033[1;31mTest 36: Test Map RBegin\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;

	std::cout << "\033[1;32mft::map<char, int> mymap(MapChar); \033[0m\n";
	ft::map<char, int> mymap(MapChar);

	std::cout << "\033[1;32mmymap.rbegin()->first \033[0m" << mymap.rbegin()->first <<  std::endl;		
	std::cout << "\033[1;32mmymap.rbegin()->second \033[0m" << mymap.rbegin()->second <<  std::endl;

	std::cout << "\033[1;32mft::map<char, int>::reverse_iterator it = mymap.rbegin(); \033[0m\n";
	ft::map<char, int>::reverse_iterator it = mymap.rbegin();
	
	char c = 'e';
	for (; it != mymap.rend(); ++it) {
		std::cout << "\033[1;32mExpected: \033[0m" << c << "\033[1;32m, Realized it->first: \033[0m" << it->first << std::endl;
		std::cout << "\033[1;32mExpected MapChar["<< c <<"]: \033[0m" << MapChar[c] << "\033[1;32m, Realized it->second: \033[0m" << it->second << std::endl;
		c--;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_37(void)
{
	std::cout << "\033[1;31mTest 37: Test Map Rend\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mMapChar['d'] = 4; \033[0m\n";
	std::cout << "\033[1;32mMapChar['e'] = 5; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
    MapChar['d'] = 4;
    MapChar['e'] = 5;

	std::cout << "\033[1;32mft::map<char, int> mymap(MapChar); \033[0m\n";
	ft::map<char, int> mymap(MapChar);

	std::cout << "\033[1;32mft::map<char, int>::reverse_iterator it = mymap.rend(); \033[0m\n";
	ft::map<char, int>::reverse_iterator it = mymap.rend();

	std::cout << "\033[1;32mit->first \033[0m" << it->first <<  std::endl;		
	std::cout << "\033[1;32mit->second \033[0m" << it->second <<  std::endl;	
	
	char c = 'a';
	for (; it != mymap.rbegin(); --it) {
		std::cout << "\033[1;32mExpected: \033[0m" << c << "\033[1;32m, Realized it->first: \033[0m" << it->first << std::endl;
		std::cout << "\033[1;32mExpected MapChar["<< c <<"]: \033[0m" << MapChar[c] << "\033[1;32m, Realized it->second: \033[0m" << it->second << std::endl;
		c++;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}


void test_38(void) 
{
	std::cout << "\033[1;31mTest 38: Test Map Size\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	ft::map<char, int> mymap;
	
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	std::cout << "\033[1;32mmymap.size() = \033[0m" << mymap.size() <<  std::endl;
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	mymap['d'] = 8;
	std::cout << "\033[1;32mmymap.size() = \033[0m" << mymap.size() <<  std::endl;
	std::cout << "\033[1;32mmymap.erase('d'); \033[0m\n";
	mymap.erase('d');
	std::cout << "\033[1;32mmymap.size() = \033[0m" << mymap.size() <<  std::endl;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_39(void) 
{
	std::cout << "\033[1;31mTest 39: Test Map Empty\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	ft::map<char, int> mymap;
	
	std::cout << "\033[1;32mmymap.empty() = \033[0m" << mymap.empty() <<  std::endl;
	
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	mymap['a'] = 2;
	std::cout << "\033[1;32mmymap.empty() = \033[0m" << mymap.empty() <<  std::endl;
	
	std::cout << "\033[1;32mmymap.erase('a'); \033[0m\n";
	mymap.erase('a');
	std::cout << "\033[1;32mmymap.empty() = \033[0m" << mymap.empty() <<  std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}


void test_40(void) 
{
	std::cout << "\033[1;31mTest 39: Test Map MaxSize\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	ft::map<char, int> mymap;
	std::cout << "\033[1;32mstd::map<char, int> stdmap; \033[0m\n";
	std::map<char, int> stdmap;
	std::cout << "\033[1;32mmymap.max_size():  \033[0m" << mymap.max_size() << std::endl;
	std::cout << "\033[1;32mstdmap.max_size(): \033[0m" << stdmap.max_size() << std::endl;	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_41(void) 
{
	std::cout << "\033[1;31mTest 41: Test Map Element Access\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;

	std::cout << "\033[1;32mMapChar['a']: \033[0m" << MapChar['a'] << std::endl;
	std::cout << "\033[1;32mMapChar['b']: \033[0m" << MapChar['b'] << std::endl;
	std::cout << "\033[1;32mMapChar['c']: \033[0m" << MapChar['c'] << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_42(void) 
{
	std::cout << "\033[1;31mTest 42: Test Map Clear\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> MapChar; \033[0m\n";
	std::cout << "\033[1;32mMapChar['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mMapChar['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mMapChar['c'] = 3; \033[0m\n";
	
	ft::map<char, int> MapChar;
	MapChar['a'] = 1;
    MapChar['b'] = 2;
    MapChar['c'] = 3;
	
	std::cout << "\033[1;32mMapChar.size():  \033[0m" << MapChar.size() << std::endl;
	std::cout << "\033[1;32mMapChar.clear(); \033[0m\n";
	MapChar.clear();
	std::cout << "\033[1;32mMapChar.size():  \033[0m" << MapChar.size() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_43(void) 
{
	std::cout << "\033[1;31mTest 43: Test Map Insert\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 3; \033[0m\n";
	
	ft::map<char, int> mymap;
	mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['c'] = 3;

	std::cout << "\033[1;32mmymap.insert(ft::pair<char, int>('d', 8));" << std::endl;
	mymap.insert(ft::pair<char, int>('d', 8));
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['d']:  \033[0m" << mymap['d'] << std::endl;

	std::cout << "\033[1;32mmymap.insert(ft::pair<char, int>('e', 10));" << std::endl;
	mymap.insert(ft::pair<char, int>('e', 10));
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['e']:  \033[0m" << mymap['e'] << std::endl;


	std::cout << "\033[1;32mmymap.insert(mymap.begin(), ft::pair<char, int>('f', 12));" << std::endl;
	mymap.insert(mymap.begin(), ft::pair<char, int>('f', 12));
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['f']:  \033[0m" << mymap['f'] << std::endl;

	std::cout << "\033[1;32mft::map<char, int> MapChar;" << std::endl;
	std::cout << "\033[1;32mMapChar['g'] = 14;" << std::endl;
	std::cout << "\033[1;32mMapChar['h'] = 16;" << std::endl;
	std::cout << "\033[1;32mMapChar['i'] = 18;" << std::endl;
	ft::map<char, int> MapChar;
	MapChar['g'] = 14;
    MapChar['h'] = 16;
    MapChar['i'] = 18;

	std::cout << "\033[1;32mft::map<char, int>::iterator begin = MapChar.begin(); \033[0m\n";
	ft::map<char, int>::iterator begin = MapChar.begin();

	std::cout << "\033[1;32mft::map<char, int>::iterator end = MapChar.end(); \033[0m\n";
	ft::map<char, int>::iterator end = MapChar.end();

	std::cout << "\033[1;32mmymap.insert(begin, end); \033[0m\n";

	mymap.insert(begin, end);
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['g']:  \033[0m" << mymap['g'] << std::endl;
	std::cout << "\033[1;32mmymap['h']:  \033[0m" << mymap['h'] << std::endl;
	std::cout << "\033[1;32mmymap['i']:  \033[0m" << mymap['i'] << std::endl;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_44(void) 
{
	std::cout << "\033[1;31mTest 44: Test Map Erase\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";
	
	ft::map<char, int> mymap;
	mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['c'] = 3;
	mymap['d'] = 8;
  	mymap['e'] = 10;

	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;

	std::cout << "\033[1;32mmymap.erase('e'); \033[0m\n";
	mymap.erase('e');
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['a']:  \033[0m" << mymap['a'] << std::endl;
	std::cout << "\033[1;32mmymap['b']:  \033[0m" << mymap['b'] << std::endl;
	std::cout << "\033[1;32mmymap['c']:  \033[0m" << mymap['c'] << std::endl;
	std::cout << "\033[1;32mmymap['d']:  \033[0m" << mymap['d'] << std::endl;

	std::cout << "\033[1;32mmymap.erase(mymap.begin()); \033[0m\n";
	mymap.erase(mymap.begin());
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap['b']:  \033[0m" << mymap['b'] << std::endl;
	std::cout << "\033[1;32mmymap['c']:  \033[0m" << mymap['c'] << std::endl;
	std::cout << "\033[1;32mmymap['d']:  \033[0m" << mymap['d'] << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_45(void) 
{
	std::cout << "\033[1;31mTest 45: Test Erase Iterator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<int, int> m2; \033[0m\n";
	std::cout << "\033[1;32mm2[1] = 2; \033[0m\n";
	std::cout << "\033[1;32mm2[2] = 4; \033[0m\n";
	std::cout << "\033[1;32mm2[3] = 6; \033[0m\n";
	std::cout << "\033[1;32mm2[4] = 8; \033[0m\n";
	std::cout << "\033[1;32mm2[5] = 10; \033[0m\n";
	std::cout << "\033[1;32mm2[6] = 12; \033[0m\n";
	std::cout << "\033[1;32mm2[7] = 13; \033[0m\n";
	std::cout << "\033[1;32mm2[8] = 14; \033[0m\n";

	ft::map<int, int> m2;
	m2[1] = 2;
	m2[2] = 4;
	m2[3] = 6;
	m2[4] = 8;
	m2[5] = 10;
	m2[6] = 12;
	m2[7] = 14;
	m2[8] = 16;

	std::cout << "\033[1;32mft::map<int, int>::iterator it = m2.begin(); \033[0m\n";
	std::cout << "\033[1;32mft::map<int, int>::iterator ite = m2.end(); \033[0m\n";
	std::cout << "\033[1;32mit++; \033[0m\n";
	ft::map<int, int>::iterator it = m2.begin();
	ft::map<int, int>::iterator ite = m2.end();
	it++;

	std::cout << "\033[1;32mm2.erase(it, ite); \033[0m\n";
  	m2.erase(it, ite);

	std::cout << "\033[1;32mm2.size():  \033[0m" << m2.size() << std::endl;
	std::cout << "\033[1;32mm2[1]:  \033[0m" << m2[1] << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_46(void) 
{
	std::cout << "\033[1;31mTest 46: Test Clear\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";
	
	ft::map<char, int> mymap;
	mymap['a'] = 1;
    mymap['b'] = 2;
    mymap['c'] = 3;
	mymap['d'] = 8;
  	mymap['e'] = 10;

	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;
	std::cout << "\033[1;32mmymap.clear(); \033[0m\n";
 	mymap.clear();
	std::cout << "\033[1;32mmymap.size():  \033[0m" << mymap.size() << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_47(void) 
{
	std::cout << "\033[1;31mTest 47: Test Map Swap\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap1; \033[0m\n";
	std::cout << "\033[1;32mmymap1['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mmymap1['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap1['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mmymap1['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap1['e'] = 10; \033[0m\n";

	ft::map<char, int> mymap1;
	mymap1['a'] = 1;
	mymap1['b'] = 2;
	mymap1['c'] = 3;
	mymap1['d'] = 8;
	mymap1['e'] = 10;

	std::cout << "\033[1;32mft::map<char, int> mymap2; \033[0m\n";
	std::cout << "\033[1;32mmymap2['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap2['g'] = 14; \033[0m\n";
	std::cout << "\033[1;32mmymap2['h'] = 16; \033[0m\n";
	std::cout << "\033[1;32mmymap2['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap2['j'] = 20; \033[0m\n";

	ft::map<char, int> mymap2;
	mymap2['f'] = 12;
	mymap2['g'] = 14;
	mymap2['h'] = 16;
	mymap2['i'] = 18;
  	mymap2['j'] = 20;

	std::cout << "\033[1;32mmymap1.swap(mymap2);  \033[0m" << std::endl;
	mymap1.swap(mymap2);

	std::cout << "\033[1;32mmymap1.size():  \033[0m" << mymap1.size() << std::endl;
	std::cout << "\033[1;32mmymap1['f']:  \033[0m" << mymap1['f'] << std::endl;
	std::cout << "\033[1;32mmymap1['g']:  \033[0m" << mymap1['g'] << std::endl;
	std::cout << "\033[1;32mmymap1['h']:  \033[0m" << mymap1['h'] << std::endl;
	std::cout << "\033[1;32mmymap1['i']:  \033[0m" << mymap1['i'] << std::endl;
	std::cout << "\033[1;32mmymap1['j']:  \033[0m" << mymap1['j'] << std::endl;

	std::cout << "\033[1;32mmymap2.size():  \033[0m" << mymap2.size() << std::endl;
	std::cout << "\033[1;32mmymap2['a']:  \033[0m" << mymap2['a'] << std::endl;
	std::cout << "\033[1;32mmymap2['b']:  \033[0m" << mymap2['b'] << std::endl;
	std::cout << "\033[1;32mmymap2['c']:  \033[0m" << mymap2['c'] << std::endl;
	std::cout << "\033[1;32mmymap2['d']:  \033[0m" << mymap2['d'] << std::endl;
	std::cout << "\033[1;32mmymap2['e']:  \033[0m" << mymap2['e'] << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_48(void) 
{
	std::cout << "\033[1;31mTest 48: Test Key Comp\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap1; \033[0m\n";
	std::cout << "\033[1;32mmymap1['a'] = 1; \033[0m\n";
	std::cout << "\033[1;32mmymap1['b'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap1['c'] = 3; \033[0m\n";
	std::cout << "\033[1;32mmymap1['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap1['e'] = 10; \033[0m\n";

	ft::map<char, int> mymap1;
	mymap1['a'] = 1;
	mymap1['b'] = 2;
	mymap1['c'] = 3;
	mymap1['d'] = 8;
	mymap1['e'] = 10;

	std::cout << "\033[1;32mft::map<char, int> mymap2; \033[0m\n";
	std::cout << "\033[1;32mmymap2['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap2['g'] = 14; \033[0m\n";
	std::cout << "\033[1;32mmymap2['h'] = 16; \033[0m\n";
	std::cout << "\033[1;32mmymap2['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap2['j'] = 20; \033[0m\n";

	ft::map<char, int> mymap2;
	mymap2['f'] = 12;
	mymap2['g'] = 14;
	mymap2['h'] = 16;
	mymap2['i'] = 18;
  	mymap2['j'] = 20;

	std::cout << "\033[1;32mft::map<char, int>::key_compare kc = mymap1.key_comp(); \033[0m\n";
	ft::map<char, int>::key_compare kc = mymap1.key_comp();
	std::cout << "\033[1;32mkc('a', 'b') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('b', 'c') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('c', 'd') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('d', 'e') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('e', 'f') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('f', 'g') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('g', 'h') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('h', 'i') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;
	std::cout << "\033[1;32mkc('i', 'j') Expected: 1 Realized:  \033[0m" << kc('a', 'b') << std::endl;

	std::cout << "\033[1;32mft::map<char, int>::iterator it; \033[0m\n";
	std::cout << "\033[1;32mfor (it = mymap1.begin(); it != mymap1.end(); ++it) \033[0m\n";
	ft::map<char, int>::iterator it;
	for (it = mymap1.begin(); it != mymap1.end(); ++it)
	{
		std::cout << "\033[1;32m	kc(it->first,(char)(it->first + 1)) -> kc(" << it->first << ", " << (char)(it->first + 1) << "):  \033[0m" << kc(it->first, it->first + 1) << std::endl;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_49(void) 
{
	std::cout << "\033[1;31mTest 49: Test Map Value Comp\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap1; \033[0m\n";
	std::cout << "\033[1;32mmymap1['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap1['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap1['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap1['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap1['e'] = 10; \033[0m\n";

	ft::map<char, int> mymap1;
	mymap1['a'] = 2;
	mymap1['b'] = 4;
	mymap1['c'] = 6;
	mymap1['d'] = 8;
	mymap1['e'] = 10;

	std::cout << "\033[1;32mft::map<char, int>::value_compare vc = mymap1.value_comp(); \033[0m\n";
	ft::map<char, int>::value_compare vc = mymap1.value_comp();
	
	std::cout << "\033[1;32mft::map<char, int>::iterator it; \033[0m\n";
	std::cout << "\033[1;32mft::pair<char, int> highest = ft::make_pair('f', 12); \033[0m\n";
	ft::map<char, int>::iterator it;
  	ft::pair<char, int> highest = ft::make_pair('f', 12);

	std::cout << "\033[1;32mfor (it = mymap1.begin(); it != mymap1.end(); ++it) \033[0m\n";
  	for (it = mymap1.begin(); it != mymap1.end(); ++it)
	{
		std::cout << "\033[1;32m	vc(*it, highest)  \033[0m" << vc(*it, highest) << std::endl;
  	}

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_50(void) 
{
	std::cout << "\033[1;31mTest 50: Test Map Find\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";

	ft::map<char, int> mymap;
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	mymap['d'] = 8;

	std::cout << "\033[1;32mft::map<char, int>::iterator it = mymap.find('a'); \033[0m\n";
	ft::map<char, int>::iterator it = mymap.find('a');

	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;

	std::cout << "\033[1;32mit = mymap.find('f'); \033[0m\n";
	it = mymap.find('f'); 
	bool test;
	test =  it == mymap.end();
	std::cout << "\033[1;32mit == mymap.end() ? expected 1: realized: \033[0m" << test << std::endl;

	std::cout << "\033[1;32mconst ft::map<char, int> mymap2(mymap); \033[0m\n";
  	const ft::map<char, int> mymap2(mymap);
	std::cout << "\033[1;32mft::map<char, int>::const_iterator it2 = mymap2.find('a'); \033[0m\n";
	ft::map<char, int>::const_iterator it2 = mymap2.find('a');
	std::cout << "\033[1;32mit2->first:  \033[0m" << it2->first << std::endl;
	std::cout << "\033[1;32mit2->second:  \033[0m" << it2->second << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_51(void) 
{
	std::cout << "\033[1;31mTest 51: Test Map Count\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";

	ft::map<char, int> mymap;
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	mymap['d'] = 8;

	std::cout << "\033[1;32mmymap.count('a')  \033[0m" << mymap.count('a') << std::endl;
	std::cout << "\033[1;32mmymap.count('f') \033[0m" << mymap.count('f') << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_52(void) 
{
	std::cout << "\033[1;31mTest 52: Test Map Lower Bound\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap['p'] = 32; \033[0m\n";

	ft::map<char, int> mymap;
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	mymap['d'] = 8;
	mymap['e'] = 10;
	mymap['f'] = 12;
	mymap['i'] = 18;
	mymap['l'] = 24;
	mymap['m'] = 26;
	mymap['p'] = 32;

	std::cout << "\033[1;32mft::map<char, int>::iterator it = mymap.lower_bound('a'); \033[0m\n";
	ft::map<char, int>::iterator it = mymap.lower_bound('a');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;

	std::cout << "\033[1;32mit = mymap.lower_bound('b'); \033[0m\n";
	it = mymap.lower_bound('b');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;

	std::cout << "\033[1;32mit = mymap.lower_bound('g'); \033[0m\n";
	it = mymap.lower_bound('g');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;

	std::cout << "\033[1;32mconst ft::map<char, int> mymap2(mymap); \033[0m\n";
	const ft::map<char, int> mymap2(mymap);

	std::cout << "\033[1;32mft::map<char, int>::const_iterator it2 = mymap2.lower_bound('a'); \033[0m\n";
	ft::map<char, int>::const_iterator it2 = mymap2.lower_bound('a');
	std::cout << "\033[1;32mit2->first:  \033[0m" << it2->first << std::endl;
	std::cout << "\033[1;32mit2->second:  \033[0m" << it2->second << std::endl;

	std::cout << "\033[1;32mft::map<char, int>::const_iterator it3 = mymap2.lower_bound('q'); \033[0m\n";
	ft::map<char, int>::const_iterator it3 = mymap2.lower_bound('q');
	bool test;
	test = it3 == mymap2.end();
	std::cout << "\033[1;32mit3 == mymap2.end() ? Expected: 1,  Realized:  \033[0m" << test << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_53(void) 
{
	std::cout << "\033[1;31mTest 53: TestMap Upper Bound\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap['p'] = 32; \033[0m\n";

	ft::map<char, int> mymap;
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	mymap['d'] = 8;
	mymap['e'] = 10;
	mymap['f'] = 12;
	mymap['i'] = 18;
	mymap['l'] = 24;
	mymap['m'] = 26;
	mymap['p'] = 32;

	std::cout << "\033[1;32mft::map<char, int>::iterator it = mymap.upper_bound('a'); \033[0m\n";
	ft::map<char, int>::iterator it = mymap.upper_bound('a');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;

	std::cout << "\033[1;32mit = mymap.upper_bound('b'); \033[0m\n";
	it = mymap.upper_bound('b');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;


	std::cout << "\033[1;32mit = mymap.upper_bound('g'); \033[0m\n";
	it = mymap.upper_bound('g');
	std::cout << "\033[1;32mit->first:  \033[0m" << it->first << std::endl;
	std::cout << "\033[1;32mit->second:  \033[0m" << it->second << std::endl;


	std::cout << "\033[1;32mconst ft::map<char, int> mymap2(mymap); \033[0m\n";
	const ft::map<char, int> mymap2(mymap);

	std::cout << "\033[1;32mft::map<char, int>::const_iterator it2 = mymap2.upper_bound('a'); \033[0m\n";
	ft::map<char, int>::const_iterator it2 = mymap2.upper_bound('a');
	std::cout << "\033[1;32mit2->first:  \033[0m" << it2->first << std::endl;
	std::cout << "\033[1;32mit2->second:  \033[0m" << it2->second << std::endl;

	std::cout << "\033[1;32mft::map<char, int>::const_iterator it3 = mymap2.upper_bound('q'); \033[0m\n";
	ft::map<char, int>::const_iterator it3 = mymap2.upper_bound('q');
	bool test;
	test = it3 == mymap2.end();
	std::cout << "\033[1;32mit3 == mymap2.end() ? Expected: 1,  Realized:  \033[0m" << test << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_54(void) 
{
	std::cout << "\033[1;31mTest 54: Test Map Equal Range\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mmymap['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap['p'] = 32; \033[0m\n";

	ft::map<char, int> mymap;
	mymap['a'] = 2;
	mymap['b'] = 4;
	mymap['c'] = 6;
	mymap['d'] = 8;
	mymap['e'] = 10;
	mymap['f'] = 12;
	mymap['i'] = 18;
	mymap['l'] = 24;
	mymap['m'] = 26;
	mymap['p'] = 32;

	std::cout << "\033[1;32mft::pair<ft::map<char, int>::iterator, ft::map<char, int>::iterator> it = mymap.equal_range('a'); \033[0m\n";
	ft::pair<ft::map<char, int>::iterator, ft::map<char, int>::iterator> it = mymap.equal_range('a');
	std::cout << "\033[1;32mit.first->first  \033[0m" << it.first->first << std::endl;
	std::cout << "\033[1;32mit.second->first  \033[0m" << it.second->first << std::endl;

	std::cout << "\033[1;32mit = mymap.equal_range('b');  \033[0m" << std::endl;
	it = mymap.equal_range('b');
	std::cout << "\033[1;32mit.first->first  \033[0m" << it.first->first << std::endl;
	std::cout << "\033[1;32mit.second->first  \033[0m" << it.second->first << std::endl;

	std::cout << "\033[1;32mit = mymap.equal_range('g');  \033[0m" << std::endl;
	it = mymap.equal_range('g');
	std::cout << "\033[1;32mit.first->first  \033[0m" << it.first->first << std::endl;
	std::cout << "\033[1;32mit.second->first  \033[0m" << it.second->first << std::endl;

	std::cout << "\033[1;32mconst ft::map<char, int> mymap2(mymap);  \033[0m" << std::endl;
	const ft::map<char, int> mymap2(mymap);

	std::cout << "\033[1;32mft::pair<ft::map<char, int>::const_iterator, ft::map<char, int>::const_iterator> it2 = mymap2.equal_range('a'); \033[0m\n";
	ft::pair<ft::map<char, int>::const_iterator, ft::map<char, int>::const_iterator> it2 = mymap2.equal_range('a');
	std::cout << "\033[1;32mit2.first->first  \033[0m" << it2.first->first << std::endl;
	std::cout << "\033[1;32mit2.second->first  \033[0m" << it2.second->first << std::endl;

	std::cout << "\033[1;32mit2 = mymap2.equal_range('b');  \033[0m" << std::endl;
	it2 = mymap2.equal_range('b');
	std::cout << "\033[1;32mit2.first->first  \033[0m" << it2.first->first << std::endl;
	std::cout << "\033[1;32mit2.second->first  \033[0m" << it2.second->first << std::endl;

	std::cout << "\033[1;32mit2 = mymap2.equal_range('g');  \033[0m" << std::endl;
	it2 = mymap2.equal_range('g');
	std::cout << "\033[1;32mit2.first->first  \033[0m" << it2.first->first << std::endl;
	std::cout << "\033[1;32mit2.second->first  \033[0m" << it2.second->first << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_55(void) 
{
	std::cout << "\033[1;31mTest 55: Test Get Allocator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap; \033[0m\n";
	std::cout << "\033[1;32mstd::allocator<std::pair<const char, int>> alloc; \033[0m\n";
	ft::map<char, int> mymap;
	std::allocator<std::pair<const char, int> > alloc;
	bool test;
	test = mymap.get_allocator() ==  alloc;

	std::cout << "\033[1;32mmymap.get_allocator() ==  alloc ? Expected: 1, Realized: \033[0m" << test << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_56(void) 
{
	std::cout << "\033[1;31mTest 56: Test Map Comparison Operators\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap1; \033[0m\n";
	std::cout << "\033[1;32mft::map<char, int> mymap2; \033[0m\n";
	std::cout << "\033[1;32mft::map<char, int> mymap3; \033[0m\n";
	std::cout << "\033[1;32mft::map<char, int> mymap4; \033[0m\n"<< std::endl;
	ft::map<char, int> mymap1;
  	ft::map<char, int> mymap2;
  	ft::map<char, int> mymap3;
  	ft::map<char, int> mymap4;

	std::cout << "\033[1;32mmymap1['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap1['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap1['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap1['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap1['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap1['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap1['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap1['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap1['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap1['p'] = 32; \033[0m\n"<< std::endl;

	mymap1['a'] = 2;
	mymap1['b'] = 4;
	mymap1['c'] = 6;
	mymap1['d'] = 8;
	mymap1['e'] = 10;
	mymap1['f'] = 12;
	mymap1['i'] = 18;
	mymap1['l'] = 24;
	mymap1['m'] = 26;
	mymap1['p'] = 32;

	std::cout << "\033[1;32mmymap2['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap2['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap2['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap2['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap2['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap2['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap2['i'] = 12; \033[0m\n"<< std::endl;

	mymap2['a'] = 2;
	mymap2['b'] = 4;
	mymap2['c'] = 6;
	mymap2['d'] = 8;
	mymap2['e'] = 10;
	mymap2['f'] = 12;
	mymap2['i'] = 18;

	std::cout << "\033[1;32mmymap3['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap3['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap3['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap3['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap3['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap3['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap3['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap3['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap3['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap3['p'] = 32; \033[0m\n"<< std::endl;

	mymap3['a'] = 2;
	mymap3['b'] = 4;
	mymap3['c'] = 6;
	mymap3['d'] = 8;
	mymap3['e'] = 10;
	mymap3['f'] = 12;
	mymap3['i'] = 18;
	mymap3['l'] = 24;
	mymap3['m'] = 26;
	mymap3['p'] = 32;

	bool test;
	test = mymap1 == mymap3;
	std::cout << "\033[1;32mmymap1 == mymap3, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap1 != mymap2;
	std::cout << "\033[1;32mmymap1 != mymap2, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap2 < mymap1;
	std::cout << "\033[1;32mmymap2 < mymap1, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap1 > mymap2;
	std::cout << "\033[1;32mmymap1 > mymap2, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap1 <= mymap3;
	std::cout << "\033[1;32mmymap1 <= mymap3, Expectec:1, Realized: \033[0m" << test  << std::endl;
	test = mymap1 >= mymap3;
	std::cout << "\033[1;32mmymap1 >= mymap3, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap1 <= mymap1;
	std::cout << "\033[1;32mmymap1 <= mymap1, Expectec:1, Realized: \033[0m" << test << std::endl;
	test = mymap1 >= mymap1;
	std::cout << "\033[1;32mmymap1 >= mymap1, Expectec:1, Realized: \033[0m" << test << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_57(void) 
{
	std::cout << "\033[1;31mTest 57: Test Map Swap Operator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::map<char, int> mymap1; \033[0m\n";
	std::cout << "\033[1;32mft::map<char, int> mymap2; \033[0m\n";
	ft::map<char, int> mymap1;
	ft::map<char, int> mymap2;

	std::cout << "\033[1;32mmymap1['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap1['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap1['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap1['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap1['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap1['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap1['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap1['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap1['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap1['p'] = 32; \033[0m\n"<< std::endl;

	mymap1['a'] = 2;
	mymap1['b'] = 4;
	mymap1['c'] = 6;
	mymap1['d'] = 8;
	mymap1['e'] = 10;
	mymap1['f'] = 12;
	mymap1['i'] = 18;
	mymap1['l'] = 24;
	mymap1['m'] = 26;
	mymap1['p'] = 32;

	std::cout << "\033[1;32mmymap2['a'] = 2; \033[0m\n";
	std::cout << "\033[1;32mmymap2['b'] = 4; \033[0m\n";
	std::cout << "\033[1;32mmymap2['c'] = 6; \033[0m\n";
	std::cout << "\033[1;32mmymap2['d'] = 8; \033[0m\n";
	std::cout << "\033[1;32mmymap2['e'] = 10; \033[0m\n";
	std::cout << "\033[1;32mmymap2['f'] = 12; \033[0m\n";
	std::cout << "\033[1;32mmymap2['i'] = 18; \033[0m\n";
	std::cout << "\033[1;32mmymap2['l'] = 24; \033[0m\n";
	std::cout << "\033[1;32mmymap2['m'] = 26; \033[0m\n";
	std::cout << "\033[1;32mmymap2['p'] = 32; \033[0m\n"<< std::endl;

	mymap2['a'] = 2;
	mymap2['b'] = 4;
	mymap2['c'] = 6;
	mymap2['d'] = 8;
	mymap2['e'] = 10;
	mymap2['f'] = 12;
	mymap2['i'] = 18;
	mymap2['l'] = 24;
	mymap2['m'] = 26;
	mymap2['p'] = 32;

	std::cout << "\033[1;32mft::swap(mymap1, mymap2); \033[0m" << std::endl;
	ft::swap(mymap1, mymap2);

	bool test;
	test = mymap1 == mymap2;
	std::cout << "\033[1;32mmymap1 == mymap2, Expectec:1, Realized: \033[0m" << test << std::endl;

	test = mymap2 == mymap1;
	std::cout << "\033[1;32mmymap2 == mymap1, Expectec:1, Realized: \033[0m" << test << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_58(void) 
{
	std::cout << "\033[1;31mTest 58: Test Stack Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";


	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	std::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, std::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_59(void) 
{
	std::cout << "\033[1;31mTest 59: Test Stack Push\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";


	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	std::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, std::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;

	std::cout << "\033[1;32ms.push(42);  \033[0m\n";
	std::cout << "\033[1;32ms1.push(42); \033[0m\n";
	std::cout << "\033[1;32ms2.push(42); \033[0m\n";
	s.push(42);
  	s1.push(42);
  	s2.push(42);
	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_60(void) 
{
	std::cout << "\033[1;31mTest 60: Test Stack Top\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";


	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	std::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, std::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():  \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size(): \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size(): \033[0m" << s2.size() << std::endl;

	std::cout << "\033[1;32ms.push(43); \033[0m\n";
	std::cout << "\033[1;32ms1.push(43);\033[0m\n";
	std::cout << "\033[1;32ms2.push(43);\033[0m\n";
	s.push(43);
  	s1.push(43);
  	s2.push(43);

	std::cout << "\033[1;32ms.top():  \033[0m" << s.top() << std::endl;
	std::cout << "\033[1;32ms1.top(): \033[0m" << s1.top() << std::endl;
	std::cout << "\033[1;32ms2.top(): \033[0m" << s2.top() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_61(void) 
{
	std::cout << "\033[1;31mTest 61: Test Stack Pop\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";

	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	std::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, std::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;

	std::cout << "\033[1;32ms.push(42);  \033[0m\n";
	std::cout << "\033[1;32ms1.push(42); \033[0m\n";
	std::cout << "\033[1;32ms2.push(42); \033[0m\n";
	
	s.push(42);
  	s1.push(42);
  	s2.push(42);
	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;
	std::cout << "\033[1;32ms.pop();  \033[0m\n";
	std::cout << "\033[1;32ms1.pop(); \033[0m\n";
	std::cout << "\033[1;32ms2.pop(); \033[0m\n";

	s.pop();
 	s1.pop();
  	s2.pop();
	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}


void test_62(void) 
{
	std::cout << "\033[1;31mTest 62: Test Stack Empty\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";

	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	std::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, std::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;
	std::cout << "\033[1;32ms.empty(): Expected:1, Realized:\033[0m" << s.empty() << std::endl;
	std::cout << "\033[1;32ms1.empty(): Expected:0, Realized:\033[0m" << s1.empty() << std::endl;
	std::cout << "\033[1;32ms2.empty(): Expected:0, Realized:\033[0m" << s2.empty() << std::endl;
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}


void test_63(void) 
{
	std::cout << "\033[1;31mTest 63: Test Comparison Operators\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::vector<int> v; \033[0m\n";
	std::cout << "\033[1;32mft::vector<int> v1(10, 42); \033[0m\n";
	std::cout << "\033[1;32mstd::vector<int> v2(10, 42); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s(v); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int> s1(v1); \033[0m\n";
	std::cout << "\033[1;32mft::stack<int, std::vector<int>> s2(v2); \033[0m\n";

	ft::vector<int> v;
  	ft::vector<int> v1(10, 42);
  	ft::vector<int> v2(10, 42);

  	ft::stack<int> s(v);
  	ft::stack<int> s1(v1);
  	ft::stack<int, ft::vector<int> > s2(v2);

	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.size():  \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size():  \033[0m" << s2.size() << std::endl;

	bool test;
	test = s == s;
	std::cout << "\033[1;32ms == s ? Expected:1, Realized:  \033[0m" << test << std::endl;
	test = s != s;
	std::cout << "\033[1;32ms != s ? Expected:0, Realized:  \033[0m" << test << std::endl;
	test = s == s1;
	std::cout << "\033[1;32ms == s1 ? Expected:0, Realized:  \033[0m" << test << std::endl;
	test = s != s1;
	std::cout << "\033[1;32ms != s1 ? Expected:1, Realized:  \033[0m" << test << std::endl;
	test = s == s2;
	std::cout << "\033[1;32ms == s2 ? Expected:0, Realized:  \033[0m" << test << std::endl;
	test = s != s2;
	std::cout << "\033[1;32ms != s2 ? Expected:1, Realized:  \033[0m" << test << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_64(void) 
{
	std::cout << "\033[1;31mTest 64: Test Set Default Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
	ft::set<int> s;
	
	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_65(void) 
{
	std::cout << "\033[1;31mTest 65: Test Set Range Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	int arr[] = {1, 2, 3, 4, 5};
	ft::set<int> s(arr, arr + 5);
  
	std::cout << "\033[1;32ms.size():   \033[0m" << s.size() << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_66(void) 
{
	std::cout << "\033[1;31mTest 66: Test Set Copy Constructor\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s2(s); \033[0m\n";

	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
	ft::set<int> s2(s);
  
  	std::cout << "\033[1;32ms2.size():   \033[0m" << s2.size() << std::endl;
  	std::cout << "\033[1;32ms2.count(1):   \033[0m" << s2.count(1) << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}


void test_67(void) 
{
	std::cout << "\033[1;31mTest 67: Test Set Assignment Operator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s2; \033[0m\n";
	std::cout << "\033[1;32ms2 = s; \033[0m\n";
	
	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
  	ft::set<int> s2;
	s2 = s;
	std::cout << "\033[1;32ms2.size():   \033[0m" << s2.size() << std::endl;
	bool test;
	test = s == s2;
  	std::cout << "\033[1;32mss == s2 ? Expected 1: Realized: \033[0m" << test << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_68(void) 
{
	std::cout << "\033[1;31mTest 68: Test Set Iterator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::iterator it = s.begin(); \033[0m\n";
  
  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
  	ft::set<int>::iterator it = s.begin();
	std::cout << "\033[1;32m*it++ Expected 1: Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ Expected 2: Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ Expected 3: Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ Expected 4: Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ Expected 5: Realized: \033[0m" << *it++ << std::endl;
  
	std::cout << "\033[1;32mft::set<int> const sc(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::const_iterator itc = sc.begin(); \033[0m\n";

	ft::set<int> const sc(arr, arr + 5);
	ft::set<int>::const_iterator itc = sc.begin();

	std::cout << "\033[1;32m*itc++ Expected 1: Realized: \033[0m" << *itc++ << std::endl;
	std::cout << "\033[1;32m*itc++ Expected 2: Realized: \033[0m" << *itc++ << std::endl;
	std::cout << "\033[1;32m*itc++ Expected 3: Realized: \033[0m" << *itc++ << std::endl;
	std::cout << "\033[1;32m*itc++ Expected 4: Realized: \033[0m" << *itc++ << std::endl;
	std::cout << "\033[1;32m*itc++ Expected 5: Realized: \033[0m" << *itc++ << std::endl;
  
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_69(void) 
{
	std::cout << "\033[1;31mTest 69: Test Set Reverse Iterator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::reverse_iterator rit = s.rbegin(); \033[0m\n";
  
  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
  	ft::set<int>::reverse_iterator rit = s.rbegin();
	std::cout << "\033[1;32m*rit++ Expected 5: Realized: \033[0m" << *rit++ << std::endl;
	std::cout << "\033[1;32m*rit++ Expected 4: Realized: \033[0m" << *rit++ << std::endl;
	std::cout << "\033[1;32m*rit++ Expected 3: Realized: \033[0m" << *rit++ << std::endl;
	std::cout << "\033[1;32m*rit++ Expected 2: Realized: \033[0m" << *rit++ << std::endl;
	std::cout << "\033[1;32m*rit++ Expected 1: Realized: \033[0m" << *rit++ << std::endl;
  
	std::cout << "\033[1;32mft::set<int> const sc(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::const_reverse_iterator ritc = sc.rbegin(); \033[0m\n";

	ft::set<int> const sc(arr, arr + 5);
	ft::set<int>::const_reverse_iterator ritc = sc.rbegin();

	std::cout << "\033[1;32m*ritc++ Expected 5: Realized: \033[0m" << *ritc++ << std::endl;
	std::cout << "\033[1;32m*ritc++ Expected 4: Realized: \033[0m" << *ritc++ << std::endl;
	std::cout << "\033[1;32m*ritc++ Expected 3: Realized: \033[0m" << *ritc++ << std::endl;
	std::cout << "\033[1;32m*ritc++ Expected 2: Realized: \033[0m" << *ritc++ << std::endl;
	std::cout << "\033[1;32m*ritc++ Expected 1: Realized: \033[0m" << *ritc++ << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_70(void) 
{
	std::cout << "\033[1;31mTest 70: Test Set Empty\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
	ft::set<int> s;
	
	std::cout << "\033[1;32ms.empty() Expectec 1: Realized:\033[0m" << s.empty()<< std::endl;
	s.insert(1);

	std::cout << "\033[1;32ms.insert(1); \033[0m\n";
	std::cout << "\033[1;32ms.empty() Expectec 0: Realized: \033[0m" << s.empty()<< std::endl;
 
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_71(void) 
{
	std::cout << "\033[1;31mTest 71: Test Set Size\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
	ft::set<int> s;
	std::cout << "\033[1;32ms.size() Expectec 0: Realized: \033[0m" << s.size()<< std::endl;
	
	std::cout << "\033[1;32ms.insert(1); \033[0m\n";
	s.insert(1);
	std::cout << "\033[1;32ms.size() Expectec 1: Realized: \033[0m" << s.size()<< std::endl;
	std::cout << "\033[1;32ms.insert(1); \033[0m\n";

	s.insert(2);
	std::cout << "\033[1;32ms.size() Expectec 2: Realized: \033[0m" << s.size()<< std::endl;
	
	std::cout << "\033[1;32ms.insert(1); \033[0m\n";
	s.insert(3);
	std::cout << "\033[1;32ms.size() Expectec 3: Realized: \033[0m" << s.size()<< std::endl;
	
	std::cout << "\033[1;32ms.insert(1); \033[0m\n";
	s.insert(4);
	std::cout << "\033[1;32ms.size() Expectec 4: Realized: \033[0m" << s.size()<< std::endl;
	
	std::cout << "\033[1;32ms.insert(1); \033[0m\n";
	s.insert(5);
	std::cout << "\033[1;32ms.size() Expectec 5: Realized: \033[0m" << s.size()<< std::endl;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_72(void) 
{
	std::cout << "\033[1;31mTest 72: Test Set Max Size\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
	std::cout << "\033[1;32mstd::set<int> s2; \033[0m\n";
  	ft::set<int> s;
	std::set<int> s2;
	std::cout << "\033[1;32ms.max_size() : \033[0m" << s.max_size()<< std::endl;
	std::cout << "\033[1;32ms2.max_size() : \033[0m" << s2.max_size()<< std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_73(void) 
{
	std::cout << "\033[1;31mTest 73: Test Set Insert\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
  	ft::set<int> s;

	std::cout << "\033[1;32mft::pair<ft::set<int>::iterator, bool> ret = s.insert(1); \033[0m\n";
  	ft::pair<ft::set<int>::iterator, bool> ret = s.insert(1);
	bool test;
	test = ret.first == s.begin();
	std::cout << "\033[1;32mret.first == s.begin() ? Expected: 1, Realized: \033[0m" << test << std::endl;

	std::cout << "\033[1;32mret = s.insert(1); \033[0m\n";
	ret = s.insert(1);
	test = ret.first == s.begin();
	std::cout << "\033[1;32mret.first == s.begin() ? Expected: 1, Realized: \033[0m" << test << std::endl;

	std::cout << "\033[1;32mft::set<int>::iterator it2; \033[0m\n";
	std::cout << "\033[1;32mit2 = s.insert(s.begin(), 3); \033[0m\n";
	ft::set<int>::iterator it2;
	it2 = s.insert(s.begin(), 3);
	std::cout << "\033[1;32m*it2 ? Expected: 3, Realized: \033[0m" << *it2 << std::endl;

	std::cout << "\033[1;32mint arr[] = {4, 5, 6, 7, 8}; \033[0m\n";
	std::cout << "\033[1;32ms.insert(arr, arr + 5); \033[0m\n";
	int arr[] = {4, 5, 6, 7, 8};
	s.insert(arr, arr + 5);
	std::cout << "\033[1;32ms.size() ? Expected: 7, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms.count(4) ? Expected: 1, Realized: \033[0m" << s.count(4) << std::endl;

  
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_74(void) 
{
	std::cout << "\033[1;31mTest 74: Test Set Erase\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32m	ft::set<int>::iterator it = s.begin(); \033[0m\n";
	std::cout << "\033[1;32mit++; \033[0m\n";
	std::cout << "\033[1;32mit++; \033[0m\n";
	std::cout << "\033[1;32mit++; \033[0m\n";
	std::cout << "\033[1;32mit++; \033[0m\n";

 	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
  	ft::set<int>::iterator it = s.begin();
  	it++;
  	it++;
  	it++;
  	it++;

	std::cout << "\033[1;32ms.erase(it); \033[0m\n";
	s.erase(it);
	std::cout << "\033[1;32ms.size() ? Expected: 4, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms.count(5) ? Expected: 0, Realized: \033[0m" << s.count(5) << std::endl;

	std::cout << "\033[1;32ms.erase(1); \033[0m\n";
	s.erase(1);
	std::cout << "\033[1;32ms.size() ? Expected: 3, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms.count(1) ? Expected: 0, Realized: \033[0m" << s.count(1) << std::endl;
	std::cout << "\033[1;32ms.count(2) ? Expected: 0, Realized: \033[0m" << s.count(2) << std::endl;

	std::cout << "\033[1;32mft::set<int>::iterator it3 = s.begin(); \033[0m\n";
	std::cout << "\033[1;32mit3++; \033[0m\n";
	std::cout << "\033[1;32mit3++; \033[0m\n";
	std::cout << "\033[1;32ms.erase(s.begin(), it3); \033[0m\n";
	ft::set<int>::iterator it3 = s.begin();
  	it3++;
  	it3++;
  	s.erase(s.begin(), it3);
	std::cout << "\033[1;32ms.size() ? Expected: 1, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms.count(3) ? Expected: 0, Realized: \033[0m" << s.count(3) << std::endl;

	std::cout << "\033[1;32ms.erase(s.begin(), s.end()); \033[0m\n";
	s.erase(s.begin(), s.end());
	std::cout << "\033[1;32ms.size() ? Expected: 0, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms.count(1) ? Expected: 0, Realized: \033[0m" << s.count(3) << std::endl;

 	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_75(void) 
{
	std::cout << "\033[1;31mTest 75: Test Set Swap\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr1[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mint arr2[] = {6, 7, 8, 9, 10}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s1(arr1, arr1 + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s2(arr2, arr2 + 5); \033[0m\n";

	int arr1[] = {1, 2, 3, 4, 5};
  	int arr2[] = {6, 7, 8, 9, 10};
  	ft::set<int> s1(arr1, arr1 + 5);
  	ft::set<int> s2(arr2, arr2 + 5);

	std::cout << "\033[1;32ms1.swap(s2); \033[0m\n";
  	s1.swap(s2);
	std::cout << "\033[1;32ms1.size() ? Expected: 5, Realized: \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size() ? Expected: 5, Realized: \033[0m" << s2.size() << std::endl;
	std::cout << "\033[1;32ms1.count(6) ? Expected: 1, Realized: \033[0m" << s1.count(6) << std::endl;
	std::cout << "\033[1;32ms2.count(1) ? Expected: 1, Realized: \033[0m" << s2.count(1) << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_76(void) 
{
	std::cout << "\033[1;31mTest 76: Test Set Clear\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	

  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
	  
	std::cout << "\033[1;32ms2.size() ? Expected: 5, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.count(1) ? Expected: 1, Realized: \033[0m" << s.count(1) << std::endl;
	std::cout << "\033[1;32ms1.count(5) ? Expected: 1, Realized: \033[0m" << s.count(5) << std::endl;
	std::cout << "\033[1;32ms.clear(); \033[0m\n";
  	s.clear();
	std::cout << "\033[1;32ms2.size() ? Expected: 0, Realized: \033[0m" << s.size() << std::endl;
	std::cout << "\033[1;32ms1.count(1) ? Expected: 0, Realized: \033[0m" << s.count(1) << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_77(void) 
{
	std::cout << "\033[1;31mTest 77: Test Set Key Compare\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::key_compare cmp = s.key_comp(); \033[0m\n";
	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
	ft::set<int>::key_compare cmp = s.key_comp();
	std::cout << "\033[1;32mcmp(1, 2) ? Expected: 1, Realized: \033[0m" << cmp(1, 2) << std::endl;
	std::cout << "\033[1;32mcmp(2, 1) ? Expected: 0, Realized: \033[0m" << cmp(2, 1) << std::endl;
	std::cout << "\033[1;32mcmp(1, 1) ? Expected: 0, Realized: \033[0m" << cmp(1, 1) << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_78(void) 
{
	std::cout << "\033[1;31mTest 78: Test Set Value Compare\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::value_compare cmp = s.value_comp(); \033[0m\n";
	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
	ft::set<int>::value_compare cmp = s.value_comp();
	std::cout << "\033[1;32mcmp(1, 2) ? Expected: 1, Realized: \033[0m" << cmp(1, 2) << std::endl;
	std::cout << "\033[1;32mcmp(2, 1) ? Expected: 0, Realized: \033[0m" << cmp(2, 1) << std::endl;
	std::cout << "\033[1;32mcmp(1, 1) ? Expected: 0, Realized: \033[0m" << cmp(1, 1) << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_79(void) 
{
	std::cout << "\033[1;31mTest 79: Test Set Find\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	
	int arr[] = {1, 2, 3, 4, 5};
	ft::set<int> s(arr, arr + 5);
	
	std::cout << "\033[1;32mft::set<int>::iterator it = s.find(1); \033[0m\n";
  	ft::set<int>::iterator it = s.find(1);
	bool test;
	test = it != s.end();
	std::cout << "\033[1;32mit != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*it ? Expected: 1, Realized: \033[0m" << *it << std::endl;
	
	std::cout << "\033[1;32mit = s.find(6); \033[0m" << *it << std::endl;
  	it = s.find(6);
	test = it == s.end();
	std::cout << "\033[1;32mit == s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;

	std::cout << "\033[1;32mft::set<int> const s2(arr, arr + 5); \033[0m\n";
	ft::set<int> const s2(arr, arr + 5);
  
	std::cout << "\033[1;32mft::set<int>::const_iterator cit = s2.find(1); \033[0m\n";
  	ft::set<int>::const_iterator cit = s2.find(1);

	test = cit != s2.end();
	std::cout << "\033[1;32mcit != s2.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*cit ? Expected: 1, Realized: \033[0m" << *cit << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_80(void) 
{
	std::cout << "\033[1;31mTest 80: Test Set Count\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";

  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);
	std::cout << "\033[1;32ms.count(1) ? Expected: 1, Realized: \033[0m" << s.count(1) << std::endl;
	std::cout << "\033[1;32ms.count(6) ? Expected: 0, Realized: \033[0m" << s.count(6) << std::endl;

  
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_81(void) 
{
	std::cout << "\033[1;31mTest 81: Test Set Lower Bound\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);

	std::cout << "\033[1;32mft::set<int>::iterator it = s.lower_bound(1); \033[0m\n";
 	ft::set<int>::iterator it = s.lower_bound(1);
	bool test;
	test = it != s.end();
	std::cout << "\033[1;32mit != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*it ? Expected: 1, Realized: \033[0m" << *it << std::endl;
 
	std::cout << "\033[1;32mit = s.lower_bound(6); \033[0m\n";
	it = s.lower_bound(6);
	test = it == s.end();
	std::cout << "\033[1;32mit == s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
  
  	std::cout << "\033[1;32mft::set<int> const s2(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::const_iterator cit = s2.lower_bound(1); \033[0m\n";

  	ft::set<int> const s2(arr, arr + 5);
  	ft::set<int>::const_iterator cit = s2.lower_bound(1);
	test = cit != s2.end();
	std::cout << "\033[1;32mcit != s2.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*cit ? Expected: 1, Realized: \033[0m" << *cit << std::endl;


	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_82(void) 
{
	std::cout << "\033[1;31mTest 82: Test Set Upper Bound\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
  	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);

	std::cout << "\033[1;32mft::set<int>::iterator it = s.upper_bound(1); \033[0m\n";
 	ft::set<int>::iterator it = s.upper_bound(1);
	bool test;
	test = it != s.end();
	std::cout << "\033[1;32mit != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*it ? Expected: 2, Realized: \033[0m" << *it << std::endl;
 
	std::cout << "\033[1;32mit = s.upper_bound(6); \033[0m\n";
	it = s.upper_bound(6);
	test = it == s.end();
	std::cout << "\033[1;32mit == s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
  
  	std::cout << "\033[1;32mft::set<int> const s2(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::set<int>::const_iterator cit = s2.upper_bound(1); \033[0m\n";

  	ft::set<int> const s2(arr, arr + 5);
  	ft::set<int>::const_iterator cit = s2.upper_bound(1);
	test = cit != s2.end();
	std::cout << "\033[1;32mcit != s2.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*cit ? Expected: 2, Realized: \033[0m" << *cit << std::endl;



	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_83(void) 
{
	std::cout << "\033[1;31mTest 83: Test Set Equal Range\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mint arr[] = {1, 2, 3, 4, 5}; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s(arr, arr + 5); \033[0m\n";
	int arr[] = {1, 2, 3, 4, 5};
  	ft::set<int> s(arr, arr + 5);

	std::cout << "\033[1;32mft::pair<ft::set<int>::iterator, ft::set<int>::iterator> p = s.equal_range(1); \033[0m\n";
  	ft::pair<ft::set<int>::iterator, ft::set<int>::iterator> p = s.equal_range(1);
	
	bool test;
	test = p.first != s.end();
	std::cout << "\033[1;32mp.first != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*p.first ? Expected: 1, Realized: \033[0m" << *p.first << std::endl;
	test = p.second != s.end();
	std::cout << "\033[1;32mp.second != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*p.second ? Expected: 2, Realized: \033[0m" << *p.second << std::endl;

	std::cout << "\033[1;32m p = s.equal_range(6); \033[0m\n";
	p = s.equal_range(6);
	test =p.first == s.end();
	std::cout << "\033[1;32mp.second != s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test =p.second == s.end();
	std::cout << "\033[1;32mp.second == s.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
  
	std::cout << "\033[1;32mft::set<int> const s2(arr, arr + 5); \033[0m\n";
	std::cout << "\033[1;32mft::pair<ft::set<int>::const_iterator, ft::set<int>::const_iterator> cp = s2.equal_range(1); \033[0m\n";

    ft::set<int> const s2(arr, arr + 5);
  	ft::pair<ft::set<int>::const_iterator, ft::set<int>::const_iterator> cp = s2.equal_range(1);

	test = cp.first != s2.end();
	std::cout << "\033[1;32mcp.first != s2.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*cp.first ? Expected: 1, Realized: \033[0m" << *cp.first << std::endl;
	test = cp.second != s2.end();
	std::cout << "\033[1;32mcp.second != s2.end() ? Expected: 1, Realized: \033[0m" << test << std::endl;
	std::cout << "\033[1;32m*cp.second ? Expected: 2, Realized: \033[0m" << *cp.second << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_84(void) 
{
	std::cout << "\033[1;31mTest 84: Test Set Get Allocator\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s; \033[0m\n";
	std::cout << "\033[1;32mstd::allocator<int> alloc; \033[0m\n";
  	
	ft::set<int> s;
  	std::allocator<int> alloc;

	bool test;
	test = s.get_allocator() == alloc;
	std::cout << "\033[1;32ms.get_allocator() == alloc ? Expected: 1, Realized: \033[0m" << test << std::endl;
	
	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_85(void) 
{
	std::cout << "\033[1;31mTest 85: Test Set Comparison Operators\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s1; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s2; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s3; \033[0m\n";

  	ft::set<int> s1;
  	ft::set<int> s2;
  	ft::set<int> s3;

	std::cout << "\033[1;32ms1.insert(1); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(2); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(3); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(4); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(5); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(1); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(2); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(3); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(4); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(5); \033[0m\n";
	std::cout << "\033[1;32ms3.insert(6); \033[0m\n";
	std::cout << "\033[1;32ms3.insert(7); \033[0m\n";
	std::cout << "\033[1;32ms3.insert(8); \033[0m\n";
	std::cout << "\033[1;32ms3.insert(9); \033[0m\n";
	std::cout << "\033[1;32ms3.insert(10); \033[0m\n";
	
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);
	s1.insert(5);
	s2.insert(1);
	s2.insert(2);
	s2.insert(3);
	s2.insert(4);
	s2.insert(5);
	s3.insert(6);
	s3.insert(7);
	s3.insert(8);
	s3.insert(9);
	s3.insert(10);

	bool test;
	test = s1 == s2;
	std::cout << "\033[1;32ms1 == s2 ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test = s1 != s2;
	std::cout << "\033[1;32ms1 != s2 ? Expected: 0, Realized: \033[0m" << test << std::endl;
	test = s1 < s2;
	std::cout << "\033[1;32ms1 < s2 ? Expected: 0, Realized: \033[0m" << test << std::endl;
	test = s1 <= s2;
	std::cout << "\033[1;32ms1 <= s2 ? Expected: 1, Realized: \033[0m" << test << std::endl;
  	test = s1 > s2;
	std::cout << "\033[1;32ms1 > s2 ? Expected: 0, Realized: \033[0m" << test << std::endl;
	test = s1 >= s2;
	std::cout << "\033[1;32ms1 >= s2 ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test = s3 > s2;
	std::cout << "\033[1;32ms3 > s2 ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test = s3 >= s2;
	std::cout << "\033[1;32ms3 >= s2 ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test = s2 < s3;
	std::cout << "\033[1;32ms2 < s3 ? Expected: 1, Realized: \033[0m" << test << std::endl;
	test = s2 <= s3;
	std::cout << "\033[1;32ms2 <= s3 ? Expected: 1, Realized: \033[0m" << test << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

void test_86(void) 
{
	std::cout << "\033[1;31mTest 86: Test Set Swap Overload\033[0m\n"<< std::endl;
	std::cout << "\033[1;32mft::set<int> s1; \033[0m\n";
	std::cout << "\033[1;32mft::set<int> s2; \033[0m\n";
	
	ft::set<int> s1;
  	ft::set<int> s2;

	std::cout << "\033[1;32ms1.insert(1); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(2); \033[0m\n";
	std::cout << "\033[1;32ms1.insert(3); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(4); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(5); \033[0m\n";
	std::cout << "\033[1;32ms2.insert(6); \033[0m\n";
	
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s2.insert(4);
	s2.insert(5);
	s2.insert(6);

	std::cout << "\033[1;32mft::swap(s1, s2); \033[0m\n";
  	ft::swap(s1, s2);

	std::cout << "\033[1;32ms1.size() ? Expected: 3, Realized: \033[0m" << s1.size() << std::endl;
	std::cout << "\033[1;32ms2.size() ? Expected: 3, Realized: \033[0m" << s2.size() << std::endl;

	std::cout << "\033[1;32mft::set<int>::iterator it = s1.begin(); \033[0m\n";
  	ft::set<int>::iterator it = s1.begin();
	  
	std::cout << "\033[1;32m*it++ ? Expected: 4, Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ ? Expected: 5, Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it ? Expected: 6, Realized: \033[0m" << *it << std::endl;
	
	std::cout << "\033[1;32mit = s2.begin(); \033[0m\n";
	it = s2.begin();

	std::cout << "\033[1;32m*it++ ? Expected: 1, Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it++ ? Expected: 2, Realized: \033[0m" << *it++ << std::endl;
	std::cout << "\033[1;32m*it ? Expected: 3, Realized: \033[0m" << *it << std::endl;

	std::cout << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
}

int main(void)
{
	test_0();
	test_1();
	test_2();
	test_3();
	test_4();
	test_5();
	test_6();
	test_7();
	test_8();
	test_9();
	test_10();
	test_11();
	test_12();
	test_13();
	test_14();
	test_15();
	test_16();
	test_17();
	test_18();
	test_19();
	test_20();
	test_21();
	test_22();
	test_23();
	test_24();
	test_25();
	test_26();
	test_27();
	test_28();
	test_29();
	test_30();
	test_31();
	test_32();
	test_33();
	test_34();
	test_35();
	test_36();
	test_37();
	test_38();
	test_39();
	test_40();
	test_41();
	test_42();
	test_43();
	test_44();
	test_45();
	test_46();
	test_47();
	test_48();
	test_49();
	test_50();
	test_51();
	test_52();
	test_53();
	test_54();
	test_55();
	test_56();
	test_57();
	test_58();
	test_59();
	test_60();
	test_61();
	test_62();
	test_63();
	test_64();
	test_65();
	test_66();
	test_67();
	test_68();
	test_69();
	test_70();
	test_71();
	test_72();
	test_73();
	test_74();
	test_75();
	test_76();
	test_77();
	test_78();
	test_79();
	test_80();
	test_81();
	test_82();
	test_83();
	test_84();
	test_85();
	test_86();
	return (0);
}
