#include "vec.h"

vector<int>::iterator add_ten(vector<int>& vec)
{
	auto iter = vec.begin();
	while (iter != vec.end())
	{
		*iter *= 10;
		iter++;
	}
	return vec.begin();
}

