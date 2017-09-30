#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

//Reverse a String iteratively and recursively

void reverseIt(string &s){
	char temp;
	size_t n = s.size();
	for(size_t i=0;i<n/2;++i){
		temp = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = temp;
	}
}
void reverseRec(string &s, int from, int to){
	if(from == to){
		return;
	}
	char temp = s[from];
	s[from] = s[to];
	s[to] = temp;
	from++;
	to--;
	reverseRec(s,from,to);
}

int main(){
	string s = "sabrina";
	reverseRec(s,0,s.size()-1);
	// reverseIt(s);
	cout << s <<endl;
	return 0;
}