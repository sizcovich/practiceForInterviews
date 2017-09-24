#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_set>

//Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time)

using namespace std;

vector<pair<int,int> > findPairSum(vector<int> vec, int m){
	unordered_set<int> set;
	vector<pair<int, int> > res;
	for(int i=0;i<vec.size();++i){
		set.insert(vec[i]);
	}
	for(int i=0;i<vec.size();++i){
		if(set.find(m-vec[i]) != set.end()){
			res.push_back({vec[i],m-vec[i]});
		}
	}
	return res;
}


int main(){
	vector<int> vec1 = {2,2,-1,3,1,1,2};
	vector<int> vec2 = {1,-1,3,3};
	vector<pair<int,int> > res = findPairSum(vec1,2);
	for(int i=0;i<res.size();++i){
		cout << res[i].first << ' ' << res[i].second << endl;
	}
	return 0;
}