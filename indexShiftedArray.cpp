#include <iostream>
#include <vector>

using namespace std;

int getIndex(vector<int>& v, int begin, int end,int a){
	int n = end-begin;
	int i = (end+begin)/2;
	if((a < v[i+begin] && a<v[begin]) || (a> v[begin+i] && a>v[n-1])){
		return getIndex(v,i+begin,n-1,a);
	}
	if((a<v[i+begin] && a>v[begin]) || (a> v[begin+i] && a<v[n-1])){
		return getIndex(v,begin,i+begin, a);
	}
	return i+begin;
}

int binarySearch(vector<int> &v, int begin, int end, int a){
	int middle = (begin + end)/2;
	if(end <= begin){
		return -1;
	}
	if(v[middle] < a){
		// cout << "v[middle] if < a " << v[middle] << endl;
		return binarySearch(v, middle+1, end, a);
	}
	if (v[middle] > a){
		// cout << "v[middle] if > a " << v[middle] << endl;
		return binarySearch(v, begin, middle, a);
	}
	return middle;
}

int main(){
	vector<int> myVector {0,1,2,3,4,6,7,8};
	vector<int> myVector2 {1,2,0};

	// myVector.push_back(2);
	// myVector.push_back(3);
	// myVector.push_back(4);
	// myVector.push_back(5);
	// myVector.push_back(0);
	// myVector.push_back(1);
	// cout << getIndex(myVector, 0, myVector.size(), 0) << endl;
	cout << getIndex(myVector2, 0, myVector2.size(), 2) << endl;
	// cout << binarySearch(myVector, 0, myVector.size(), 8) << endl;
	return 0;
}