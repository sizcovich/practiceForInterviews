#include <iostream>
#include <vector>

using namespace std;

int testingContinueBreak(vector<int> myVector){
	int n = myVector.size();
	int counter = 0;
	int i = -1;
	while (n-1 > i){
		++i;
		if (myVector[i] > 0){
			continue;
		}
		++counter;
	}
	return counter;
}


int main(){
	std::vector<int> v;
	v.push_back(1);
	v.push_back(0);
	v.push_back(0);
	v.push_back(4);
	v.push_back(6);
	v.push_back(7);
	cout << testingContinueBreak(v) <<endl;

}