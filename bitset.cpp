#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

void duplicatedEntries(vector<int> vec){
	bitset<32000> bits;
	int n = vec.size();
	for(int i = 0; i<n;++i){
		if(bits.test(vec[i])){
			cout << vec[i] << endl;
		}
		else{
			bits.set(vec[i]);
		}
	}
}

int main(){
	vector<int> k {1,2,3,1,5,7,8,4,3,7,9,4,3,2,6,7,8};
	duplicatedEntries(k);
	return 0;
}