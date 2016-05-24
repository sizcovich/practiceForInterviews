/*Write a method to sort an array of strings so that all the anagrams are next to each other*/
#include "compressor.cpp"
#include <iostream>
#include <string>
#include <vector>
// #include <pair>
#include <unordered_map>

using namespace std;

// bool anagrams(string a, string b){
// 	return (compressor(a) == compressor(b));
// }

vector<string> sortByAnagrams(vector<string> vec){
	vector<string> result;
	unordered_map<int, vector<string > > hashMap;
	for(int i = 0; i <vec.size(); ++i){
		string k = compressor(vec[i]);
		cout << k << endl;
		int act = 0;
		for(int l = 0; l < k.size()-2; l+=2){
			act += (k[l]*(k[l+1]+'0'));
		}
		unordered_map<int, vector<string > >::const_iterator got = hashMap.find(act);
		if(got == hashMap.end()){
			vector<string> s;
			s.push_back(vec[i]);
			hashMap.insert(make_pair(act, s));
		}
		else{
			hashMap[act].push_back(vec[i]);
		}
		
	}
	for(int i = 0; i<hashMap.size(); ++i){
		result.insert(result.end(), hashMap[i].begin(), hashMap[i].end());
	}
	return result;

}

int main(){
	vector<string> *s = new vector<string>;
	s->insert(s->end(),{"hola", "casa", "ahol", "chori", "asac"});
	vector<string> vec = sortByAnagrams(*s);
	for(int i = 0; i<vec.size(); ++i){
		cout << vec[i] << endl;
	}
	delete s;
	return 0;
}