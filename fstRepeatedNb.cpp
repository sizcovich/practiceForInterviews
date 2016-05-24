/*encontrar el primer número no repetido en un array*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int fstNotRepeatedNb(vector<int> vec){
	unordered_map<int,int> hashTable;
	for(int i = 0; i<vec.size();++i){
		auto it = hashTable.find(vec[i]);
		if(it == hashTable.end()){
			hashTable.insert(make_pair(vec[i],0));
		}
		else{
			it->second = 1;
		}
	}
	for(int i = 0; i < vec.size(); ++i){
		if(hashTable[vec[i]] == 0){
			return vec[i];
		}
	}
	return -1;
}

int main(){
	vector<int> *n = new vector<int>;
	vector<int> k {1,2,3,1,2,3,4,6};
	n = &k;
	cout << fstNotRepeatedNb(*n) << endl;
	return 0;
}