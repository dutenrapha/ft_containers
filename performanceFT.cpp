
#include "vector.hpp"
#include "map.hpp"
#include "stack.hpp"
#include "set.hpp"
#include <vector>
#include <map>
#include <stack>
#include <set>

#include <stdlib.h> 
#include <sys/time.h>

#include <iomanip>
#include <iostream>
#include <unistd.h>

double test_vector_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	std::vector<int> v;
	for (int i = 0; i < kNumIterations; i++)
	{
		v.push_back(i);
	}
	
	for (int i = 0; i < kNumIterations; i++)
	{
		v.pop_back();
	}

	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_vector_erase_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::vector<int> v;
	for (int i = 0; i < kNumIterations; i++)
	{
		v.push_back(i);
	}
	v.erase(v.begin(), v.end());
	
	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_map_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::map<int, int> m;
	for (int i = 0; i < kNumIterations; i++)
	{
		m[i] = i;
	}
	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_map_erase_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::map<int, int> m;
	for (int i = 0; i < kNumIterations; i++)
	{
		m[i] = i;
	}
	ft::map<int, int>::iterator it = m.begin();
	it++;
	m.erase(it, m.end());

	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_map_find_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::map<int, int> m;
	for (int i = 0; i < kNumIterations; i++)
	{
		m[i] = i;
	}
	m.find(42);

	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_stack_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::stack<int> s;
	for (int i = 0; i < kNumIterations; i++)
	{
		s.push(i);
	}
	for (int i = 0; i < kNumIterations; i++)
	{
		s.pop();
	}

	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_set_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::set<int> s;
	for (int i = 0; i < kNumIterations; i++)
	{
		s.insert(i);
	}
	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

double test_set_erase_ft(void)
{
	struct timeval begin, end;
    gettimeofday(&begin, 0);

	const int kNumIterations = 100000;
	
	ft::set<int> s;
	for (int i = 0; i < kNumIterations; i++)
	{
		s.insert(i);
	}
	ft::set<int>::iterator it = s.begin();
	it++;
	s.erase(it, s.end());

	gettimeofday(&end, 0);
    long seconds = end.tv_sec - begin.tv_sec;
    long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds + microseconds*1e-6;

	return elapsed;
}

void test(int iter, double (*func_ft)(void), std::string test)
{
	double sum = 0;
	double mean_ft = 0;
	int i = 0;

	sum = 0;
	for(i=0; i < iter; i++)
	{
		sum += func_ft();
	}
	mean_ft = sum/iter;

	std::cout << "\033[1;32mTest \033[0m" << std::left << std::setw(12) << test << std::left << std::setw(20) << "\033[1;31m - \033[0m\033[1;32mft: \033[0m" << std::left << std::setw(10) << mean_ft <<  std::endl;

}

int main(int argc, char** argv)
{
	int iter = 0;
	std::string cases;

	if (argc !=3)
	{
		std::cerr << "\033[1;32mUsage: ./performance iterations test\033[0m" << std::endl;
		std::cerr << "\033[1;31mE.g.:\033[0m ./performance 2 all" << std::endl;
		std::cerr << "\033[1;32mProvide the number of iterations and an test option as follow\033[0m" << std::endl;
		std::cerr << "test==all: test all cases" << std::endl;
		std::cerr << "test==vector: test vector assigment" << std::endl;
		std::cerr << "mtest==vectorErase: test vector erase" << std::endl;
		std::cerr << "test==map: test map assigment" << std::endl;
		std::cerr << "test==mapErase: test map erase" << std::endl;		
		std::cerr << "mtest==mapFind: test map find" << std::endl;
		std::cerr << "test==stack: test stack" << std::endl;
		std::cerr << "test==set: test set" << std::endl;
		std::cerr << "test==setErase: test setErase" << std::endl;
		return 1;
	}
	if (!std::isdigit(*argv[1]))
	{
		std::cerr << "\033[1;31mSet a valide number of iterations, ./performance for help.\033[0m" << std::endl;
		return 0;
	}
	iter = atoi(argv[1]);
	cases = argv[2];

	if (cases == "vector" || cases == "all")
	{
		test(iter, test_vector_ft, "vector");
	}
	if (cases == "vectorErase" || cases == "all")
	{
		test(iter, test_vector_erase_ft, "vector erase");
	}
	if (cases == "map" || cases == "all")
	{
		test(iter, test_map_ft, "map");
	}
	if (cases == "mapErase" || cases == "all")
	{
		test(iter, test_map_erase_ft, "map erase");
	}
	if (cases == "mapFind" || cases == "all")
	{
		test(iter, test_map_find_ft, "map find");
	}
	if (cases == "stack" || cases == "all")
	{
		test(iter, test_stack_ft, "stack");
	}
	if (cases == "set" || cases == "all")
	{
		test(iter, test_set_ft, "set");
	}
	if (cases == "setErase" || cases == "all")
	{
		test(iter, test_set_erase_ft, "setErase");
	}
	return 0;	
}