#include <iostream>
#include <vector>

using namespace std;

void pointersTest(){
	int p = 24;
	int* address = &p;
	cout << "value: " << p << endl;
	cout << "address: " << address << endl;
	cout << "data pointed: " << *address << endl;
}

int main(){
	pointersTest();
	return 0;
}