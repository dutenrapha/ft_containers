
// #include "map.hpp"
// #include "set.hpp"
// #include "stack.hpp"
#include "vector.hpp"

#include <sys/time.h>
#include <vector>
#include <iostream>

# define CONST 10;

double std_vec(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	std::vector<int> v;
	for (int i = 0; i < kNumIterations; i++)
		v.push_back(i);
	for (int i = 0; i < kNumIterations; i++)
		v.pop_back();
	
	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double ft_vec(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	std::vector<int> v;
	for (int i = 0; i < kNumIterations; i++)
		v.push_back(i);
	for (int i = 0; i < kNumIterations; i++)
		v.pop_back();
	
	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}


int main(void)
{
	double sum = 0;
	double mean_std = 0;
	double mean_ft = 0;
	int i = 0;

	for(i=0; i<CONST; i++)
	{
		sum += std_vec();
		mean_std = sum/CONST;
	}

	for(i=0; i<CONST; i++)
	{
		sum += ft_vec();
		mean_ft = sum/CONST;
	}

	std::cout <<"std vec mean run time: "<< mean_std << std::endl;
	std::cout <<"ft vec mean run time: "<< mean_ft << std::endl;
	std::cout <<"ratio: "<< mean_ft / mean_std << std::endl;
	return 0;	
}