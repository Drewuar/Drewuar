main.cpp:
#include <algorithm>#include <vector>#include "inout.h"
int main(){ 
	std::vector<int> vec; 
	read(vec); 
	std::sort(vec.begin(), vec.end()); 
	print(vec);
	return 0; 

}
inout.h 

#ifndef INOUT_H#define INOUT_H 
#include <vector>void print(const std::vector<int> & vec);void 
read(std::vector<int> & vec); 
#endif // INOUT_H 
print.cpp:

#include "inout.h"#include <iostream> 
void print(const std::vector<int> &vec){ 
	for(auto& elem : vec){
		std::cout<<elem<<std::endl; 
	} 
}
read.cpp

#include "inout.h"#include <iostream>using namespace std; 
void read(std::vector<int> &vec) {
	int n; 
	std::cin >> n; 
	for (int i = 0; i < n; i++) {
		int x; 
		std::cin >> x;
		vec.push_back(x); 
	} 
}
cmake_minimum_required(VERSION 3.14)
project(untitled13 LANGUAGES CXX)




