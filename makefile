CXX=g++
CXXFLAGS98=-Wall -Wextra -std=c++98 -fpermissive
CXXFLAGS11=-Wall -Wextra -std=c++11 -fpermissive
vec.o:vec.c
	$(CXX) $(CXXFLAGS11) -g -O -c $< -o $@
main:main.c vec.o
	$(CXX) $(CXXFLAGS11) -g -O $^ -o $@

