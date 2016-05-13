#include <iostream>

using namespace std;

char* returnArray(char** myArray){
	// *myArray = '5';
	cout<< sizeof(myArray) <<endl;

	return *myArray;

}

int main(){
	char *array;
	char five ='5';
	*array = five;
	char* m_array = returnArray(&array);
	cout<< array <<endl;
	return 0;
}