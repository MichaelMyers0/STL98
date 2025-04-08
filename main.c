#include <stdio.h>
#include <stdlib.h>
#include "vec.h"
enum {vec_cap = 10};
int main()
{
	int i;
	vector<int> v;
	for (i = 0; i < vec_cap; i++)
		v.push_back(i);
	auto iter = add_ten(v);
	while (iter != v.end())
	{
		printf("%d\n", *iter);
		iter++;
	}
	exit(0);
}
