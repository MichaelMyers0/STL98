CXX=g++
CXXFLAGS=-Wall -Wextra -std=c++98 -fpermissive
main:main.c
	$(CXX) $(CXXFLAGS) -g -O $< -o $@

