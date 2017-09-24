#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool hasACycle(vector<int> vec){
	for(int j = 0; j<vec.size();++j){
		int init = 0;
		for(int i=j; i<vec.size() || (i>=vec.size() && i%vec.size()<j); i+=init){
			init = init + vec[i%vec.size()];
			cout << init << endl;
			if(init%vec.size() == j){
				cout << init << endl;
				return true;
			}
		}
	}
	return false;
}

int main(){
	vector<int> vec = {2,2,-1};
	vector<int> vec1 = {1,-1,3};
	cout << hasACycle(vec1) << endl;
	return 0;
}