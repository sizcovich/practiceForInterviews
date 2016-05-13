#include <iostream>
#include <vector>

using namespace std;

int binarySearch(std::vector<int> v, int first, int last, int elem){

	if (first > last){
		throw invalid_argument("The element is not in the array");
	}
	const int middle = first + ((last-first)/2);
	// cout << "middle" << middle <<endl;
	// cout <<v[middle] <<endl;
	if(elem == v[middle]){
		return middle;
	}
	else if (elem < v[middle]){
		binarySearch(v, first, middle-1, elem);
	}
	else{
		binarySearch(v, middle+1, last, elem);

	}

}

int main(){
	int v[5] = {1,3,5,8,9};

	vector<int> k (v, v + sizeof(v)/sizeof(int));
	int s = k.size()-1;
	cout << "The index is " << binarySearch(k, 0, s, 9) <<endl;
	return 0;
}