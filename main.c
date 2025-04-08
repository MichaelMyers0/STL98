#include <stdio.h>
#include <stdlib.h>
#include "vec.h"
enum {vec_cap = 10};
int main()
{
	vector<int> v;
	vector<double> dv;
	dv.push_back(3.14);
	dv.push_back(4.45);
	auto iter = add_ten(dv);
	while (iter != dv.rend())
	{
		printf("%f\n", *iter);
		iter++;
	}
	exit(0);
}
