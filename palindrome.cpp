#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

bool isPalindrome(string s){
	int begin = 0, end = s.size()-1;
	while(end>begin){
		if(!isalpha(s[begin])){
			++begin;
		}
		if(!isalpha(s[end])){
			--end;
		}
		if(toupper(s[begin]) != toupper(s[end])){
			return false;
		}
		--end;
		++begin;
	}
	return true;
}

int main(){
	string s = "Hoooooh";
	string a = "casa";
	string h = "kakak";
	cout << "Hoooooh " << isPalindrome(s) << endl;
	cout << "asa " << isPalindrome(a) << endl;
	cout << "kakak " << isPalindrome(h) << endl;
	
	return 0;
}