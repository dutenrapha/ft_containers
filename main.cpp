/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:27:56 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/01 19:18:22 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"
#include <vector>

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
		std::cout << std::endl;
	}
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
	std::cout << "\033[1;31mTest 13: Test Vector Reserve \033[0m\n"<< std::endl;
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
	std::cout << "\033[1;31mTest 13: Test Vector ElementAccess \033[0m\n"<< std::endl;
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
	return (0);
}
