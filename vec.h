#ifndef VEC_H
#define VEC_H
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using std::vector;
vector<int>::iterator add_ten(vector<int>& vec);
vector<double>::reverse_iterator add_ten(vector<double>& vec);
vector<char>::reverse_iterator add_ten(vector<char>& vec);
#endif
