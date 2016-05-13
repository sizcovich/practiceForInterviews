#include <iostream>
#include <vector>

//s1 is the rotated list, s2 is the original list

using namespace std;

bool esSublista(std::vector<char> s1, vector<char> s2){
	vector<int> firstCharPositions;
	for(int i = 0; i<s2.size(); ++i){
		if(s2[i] == s1[0]){
			firstCharPositions.push_back(i);
		}
	}
	if (firstCharPositions.empty()){ return false; }
	int a = firstCharPositions.back();
	firstCharPositions.pop_back();
	for (int i = a; i<s1.size(); ++i){
		if(s2[i] != s1[i-a]){
			if(firstCharPositions.empty()){
				return false;
			}
			else{
				i = firstCharPositions.back();
				firstCharPositions.pop_back();
			}
		}
	}
	return true;
}


bool rotatedSubstring(vector<char> s1, vector<char> s2){
	vector<int> firstCharPositions;
	if (s1.size() != s2.size()){
		return false;
	}
	if (s1.size() == 0){ return true;}
	for(int i = 0; i<s1.size(); ++i){
		if(s2[i] == s1[0]){
			firstCharPositions.push_back(i);
		}
	}
	if (firstCharPositions.empty()){ return false; }

	int a = firstCharPositions.back();
	firstCharPositions.pop_back();

	for (int i = a; i<s1.size(); ++i){
		if(s2[i] != s1[i-a]){

			if(firstCharPositions.empty()){
				return false;
			}
			else{
				a = firstCharPositions.back();
				firstCharPositions.pop_back();
				i = a;
			}
		}
	}
	std::vector<char> v(s1.begin(),s1.begin()+a);

	return esSublista(v,s2);
}

int main(){

	// cout << "es sublista " << esSublista({'w','a'},{'w','a','t'}) <<endl;

	bool a = rotatedSubstring({'w','i','t','w','a','t','e','r','w','a','t'}, {'w','a','t','w','a','t','w','a','t','e','r'});
	cout << "a " << a << endl;
}