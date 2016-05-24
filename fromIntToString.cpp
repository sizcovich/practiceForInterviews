/*convert an int to a string*/

#include <string>
#include <iostream>
using namespace std;

string fromIntToString(int n){
	string s;
	char h;
	if (n == 0){
		return {'0'};
	}
	if(n < 0){
		h = '-';
		n = -n;
	}
	while(n > 0){
		int k = n % 10;
		char d = (k+'0');
		s = d + s;
		n = n/10;
	}
	return h+s;
}

int main(){
	cout << fromIntToString(-56840) << endl;
	return 0;
}