#include <iostream>
#include <string>

using namespace std;

void revert(string &s, int begin, int count){
	// int n = s.size
	for(int i = begin; i < (begin + count) / 2; ++i){
		cout << "i " << i << endl;
		char c = s[i];
		s[i] = s[count-(i-begin)-1];
		cout << count-(i-begin)-1 << endl;
		s[count-(i-begin)-1] = c;
	}
}

void doubleReverse(string &s){
	revert(s, 0, s.size());
	int  j = 0;
	for (int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){
			revert(s,j,i);
			j = i+1;
		}
		if (i == s.size()-1){
			revert(s,j,i+1);
		}
	}
}

int main(){
	// string st = "hello";
	// revert(st,0,st.size());
	string tr = "hello";
	// revert(tr,4,8);
	// cout << tr << endl;
	doubleReverse(tr);
	cout << tr << endl;	
	return 0;
}