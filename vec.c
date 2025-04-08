#include "vec.h"

vector<int>::iterator add_ten(vector<int>& vec)
{
	auto iter = vec.begin();
	while (iter != vec.end())
	{
		*iter += 10;
		iter++;
	}
	return vec.begin();
}

vector<double>::reverse_iterator add_ten(vector<double>& vec)
{
	auto iter = vec.rbegin();
	while (iter != vec.rend())
	{
		*iter += 10;
		++iter;
	}
	return vec.rbegin();
}

vector<char>::reverse_iterator add_ten(vector<char>& vec)
{
	auto iter = vec.rbegin();
	while (iter != vec.rend())
	{
		*iter += 10;
		++iter;
	}
	return vec.rbegin();
}
