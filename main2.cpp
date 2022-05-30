/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:46:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/05/30 03:08:40 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TreeBase.hpp"

typedef ft::TreeBase<int> Tree;

int main(void)
{
	Tree t;

	int TEST[100] = {15,32,322,44,5,66,78,80,49,210,11};
	
	for (int i = 0; i < 11; ++i)
	{
		t.insertUni(TEST[i]);
	}
	std::cout << "Values" << std::endl;
	for (Tree::iterator it = t.begin(); it != t.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	return (0);
}
