#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int mostFrequent(vector<int> vec){
	unordered_map<int,int> countMap;
	for(int i=0;i<vec.size();++i){
		if(countMap.find(vec[i]) == countMap.end()){
			countMap.insert({vec[i],0});
		}
		countMap[vec[i]]++;
	}
	int max = 0;
	int val;
	for(unordered_map<int,int>::iterator it=countMap.begin();it != countMap.end(); ++it){
		if(it->second>max){
			max = it->second;
			val = it->first;
		}
	}
	return val;
}

int main(){
	vector<int> vec1 = {2,2,-1,3,1,1,2};
	vector<int> vec2 = {1,-1,3,3};
	cout << mostFrequent(vec1) << endl;
	cout << mostFrequent(vec2) << endl;
	return 0;
}