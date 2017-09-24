// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <string>

// using namespace std;

// vector<string> insertInEach(char t, string k){
// 	vector<string> vec;
// 	for(auto it = k.begin(); it != k.end();++it){
// 		string m = k;
// 		k.insert(it,t);
// 		vec.push_back(k);
// 		k = m;
// 	}
// 	// for(int i = 0; i< vec.size();++i){
// 	// 	cout << vec[i]<< endl;
// 	// }
// 	return vec;
// }

// vector<string> insertion(char t, vector<string> vec){
// 	for(int i = 0; i<vec.size();++i){
// 		vector<string> insertIn = insertInEach(t,vec[i]);
// 		for(int j = 0; j<insertIn.size();++j){
// 			cout << insertIn[j]<<endl;
// 		}
// 		vec.insert(vec.end(), insertIn.begin(), insertIn.end());
// 		vec.erase(vec.begin()+i);
// 	}
// 	return vec;
// }

// vector<string> stringPermutations(string s){
// 	if(s.size() <= 1){
// 		return {s};
// 	}
// 	else{
// 		return insertion(s[0],stringPermutations(s.substr(1,s.size()-1)));

// 	}
// }

// int main() {
// 	string s = "abc";
// 	std::vector<string> vec = stringPermutations(s);
// 	for(int i = 0; i<vec.size(); ++i){
// 		cout << vec[i] << endl;
// 	}
// 	return 0;
// }

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> permute(string s)
{
	vector<string> permutations;

	if(s.length() == 0) {
		permutations.push_back("");
		return permutations;
	}

	char first = s.at(0);
	string remainder = s.substr(1);
	vector<string> words = permute(remainder);
	string word;
	for(size_t j = 0; j < words.size(); j++) {
		for(size_t i = 0; i <= words[j].length(); i++) {
			word = words[j];
			permutations.push_back(word.insert(i,1,first));
		}
	}
	return permutations;
}

int main()
{
	vector<string> result;
	string str = "abc";
	
	result = permute(str); 

	for(size_t i = 0; i < result.size(); i++) {
		cout << i << ": " << result[i] << endl;
	}
	return 0;
}
