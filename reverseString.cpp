#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

string reverseString(string s, int from, int to){
	if(from>=to){
		return s;
	}
	else{
		char t = s[to];
		s[to] = s[from];
		s[from] = t;
		return reverseString(s,from+1,to-1);
	}
}

int main() {
	string s = "hola";
	cout << reverseString(s,0,s.size()-1) << endl;
	return 0;
}