#include <iostream>
#include <tuple>
#include <vector>
// #include "binarySearch.cpp"

using namespace std;

int binarySearch(std::vector<int> v, int first, int last, int elem){

	if (first > last){
		return -1;
	}
	int middle = (last+first)/2;
	// cout << "middle" << middle <<endl;
	// cout <<v[middle] <<endl;
	if(elem == v[middle]){
		return middle;
	}
	if (elem < v[middle]){
		return binarySearch(v, first, middle-1, elem);
	}

		return binarySearch(v, middle+1, last, elem);
}


pair<int, int> getElem(vector<vector<int> > matrix, int m, int n, int begin, int end, int elem){
	if(begin > end){
		return make_pair(-1,-1);
	}
	int middle = (begin+end)/2;
	if(elem < matrix[middle][m-1] && elem > matrix[middle][0]){
		int k = binarySearch(matrix[middle], 0, m, elem);
		if(k != -1){
			return make_pair(middle, k);
		}
		else{
			int right = middle+1;
			while(elem < matrix[right][m-1] && elem > matrix[right][0]){
				int k = binarySearch(matrix[right], 0, m, elem);
				if(k != -1){
					return make_pair(right, k);
				}
				else{
					++right;
				}
			}
			int left = middle-1;
			while(elem < matrix[left][m-1] && elem > matrix[left][0]){
				int k = binarySearch(matrix[left], 0, m, elem);
				if(k != -1){
					return make_pair(left, k);
				}
				else{
					++left;
				}
			}

		}
	}
	if(elem < matrix[middle][m-1] && elem < matrix[middle][0]){
		return getElem(matrix, m, n, 0, middle, elem);
	}
	return getElem(matrix, m, n, middle+1,n,elem);
}

int main(){
	vector<vector<int> > v {{0,1,3},{2,4,5},{3,4,5}};
	cout << (getElem(v, v[0].size(), v.size(), 0, v.size(), 4)).first << endl;
	cout << (getElem(v, v[0].size(), v.size(), 0, v.size(), 4)).second << endl;
	return 0;

}