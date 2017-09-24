#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

pair<int,int> twoSum(vector<int> vec, int k){
	unordered_map<int,int> map;
	for(int i=0; i<vec.size();++i){
		if(map.find(k-vec[i]) != map.end()){
			return make_pair(vec[i],k-vec[i]);
		}
		map.insert(make_pair(vec[i],1));
	}
	throw std::invalid_argument("Invalid syntax.");
}

int main(){
	vector<int> vec = {1,2,5,4,8,7};
	cout << twoSum(vec,9).first << ' ' << twoSum(vec,9).second << endl;
	return 0;
}