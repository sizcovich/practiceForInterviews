#include <iostream>
#include <string>
#include <vector>

using namespace std;

string compressor(string s){
	vector<int> counter(26);
	string res;
	for(int i = 0; i<s.size(); ++i){
		++counter[s[i]-'a'];
	}
	for(int i = 0; i < counter.size(); ++i){
		if(counter[i] > 0){
			res.push_back(i+'a');
			res.push_back(counter[i]+'0');
		}
	}
	// if(res.size() >= s.size()){
	// 	return s;
	// }
	return res;
}

// int main(){
// 	string s = "caquita";
// 	string s1 = "chhhhsssrrt";
// 	cout << compressor(s1) << endl;
// 	return 0;
// }