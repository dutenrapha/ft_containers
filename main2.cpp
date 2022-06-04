/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:46:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/31 15:51:06 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "TreeBase.hpp"

// typedef ft::TreeBase<int> Tree;

// int main(void)
// {
// 	Tree t;

// 	int TEST[100] = {15,32,322,44,5,66,78,80,49,210,11};
	
// 	for (int i = 0; i < 11; ++i)
// 	{
// 		t.insertUni(TEST[i]);
// 	}
// 	std::cout << "Values" << std::endl;
// 	for (Tree::iterator it = t.begin(); it != t.end(); ++it)
// 	{
// 		std::cout << *it << std::endl;
// 	}

// 	return (0);
// }




// #include "Tree.hpp"

// struct Word 
// {
// 	std::string word;
// 	unsigned count;
// 	Word(const std::string &w): word(w), count(0) {}
// 	operator const std::string &() const
// 	{
// 		return word;
// 	}
// };

// int main(void)
// {
// 	typedef ft::Tree<std::string, Word> Table;
// 	Table t;
// 	std::string word;
// 	while(std::cin >> word && word != ".")
// 	{
// 		++t.insertUni(word).first->count;	
// 	}
	
// 	for (Table::iterator it = t.begin(); it != t.end(); ++it)
// 	{
// 		std::cout << it->word << ' ' << it->count << std::endl;
// 	}
	
// 	return 0;
// }


#include "map.hpp"
#include <stdlib.h>

int main(void)
{
	typedef ft::map<std::string, unsigned> Table;

	Table table;
	std::string colour[] = {"Blue", 
							"Red",
							"Red",
							"Yellow",
							"Blue", 
							"Red",
							"Red",
							"Yellow",
							"Red",
							"Yellow",
							"Blue"};
	
	for (int i=0; i<11;++i)
	{
		++table[colour[i]];	
	}
	std::cout << "Values" << std::endl;
	for (Table::iterator it = table.begin(); it != table.end(); ++it)
	{
		std::cout << it->first << ' ' << it->second << std::endl;
	}
	return (0);
}