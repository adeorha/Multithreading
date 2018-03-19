
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void function_1(vector<int> i1){
	cout<<"function_1 Size of i1 = "<<i1.size()<<endl;
}

int main(){
	vector<int> i2 = {1, 2, 3, 4};
	thread t1 {function_1, i2};

	t1.join();
	return 0;
}
