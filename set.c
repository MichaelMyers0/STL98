#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <list>
#include <functional>
#include <algorithm>
#include <utility>
#include <set>
#include "vec.h"
class number
{
	int n;
public:	
	number(int nn) : n(nn)
	{}
	bool operator<(const number& nn) const;
	bool operator>(const number& nn) const;
	bool operator==(const number& nn) const;
	int get_number() const
	{
		return n;
	}
};
bool number::operator<(const number& nn) const
{
	return n < nn.n ? true : false;
}
bool number::operator>(const number& nn) const
{
	return !(*this < nn);
}
bool number::operator==(const number& nn) const
{
	return n == nn.n ? true : false;
}
int main()
{
	std::set<number, std::less<number>> s2;
	std::set<number, std::greater<number>> s3;
	s2.insert(number(10));
	s2.insert(number(11));
	auto iter = s2.cbegin();
	while (iter != s2.cend())
	{
		printf("%d\n", (*iter).get_number());
		iter++;
	}
	s3.insert(number(10));
	s3.insert(number(11));
	printf("\n");
	iter = s3.cbegin();
	while (iter != s3.cend())
	{
		printf("%d\n", (*iter).get_number());
		iter++;
	}
	exit(0);
}
