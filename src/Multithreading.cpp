//============================================================================
// Name        : Multithreading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
using namespace std;

void function_1()
{
	cout<<"function_1\n";
}

int main() {
	thread t1(function_1);
	t1.join();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
