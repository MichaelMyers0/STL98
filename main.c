#include <stdio.h>
#include <stdlib.h>
#include "vec.h"
enum {vec_cap = 10};
int main()
{
	vector<char> vc;
	vc.push_back('a');
	vc.push_back('b');
	vc.push_back('c');
	auto iter = add_ten(vc);
	while (iter != vc.rend())
	{
		printf("%c\n", *iter);
		iter++;
	}
	iter = vc.rend();
	iter--;
	iter[0] = 'd';
	
	exit(0);
}
