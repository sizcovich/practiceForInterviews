#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

bool isPresentRotated(vector<int> vec, int elem, int from, int to){
	int middle = (to + from)/2;
	if(vec[middle] == elem){
		return true;
	}
	if(to<from){
		return false;
	}
	if(vec[from]<vec[to]){//vector sorted
		if(elem <= vec[middle]){
			return isPresentRotated(vec, elem, from, middle-1);
		}
		else{
			return isPresentRotated(vec, elem, middle+1,to);
		}
	}
	else{
		if(vec[middle]<vec[to] && elem>vec[middle] && elem<=vec[to]){
			return isPresentRotated(vec,elem,middle+1,to);
		}
		else if(vec[middle]>vec[from] && elem<vec[middle] && elem>=vec[from]){
			return isPresentRotated(vec, elem, from, middle-1);
		}
		else if((vec[middle]<vec[to]) && (elem<vec[middle] || elem>=vec[to])){
			return isPresentRotated(vec,elem,from,middle-1);
		}
		else if((vec[middle]>vec[from]) && (elem>vec[middle] || elem<=vec[from])){
			return isPresentRotated(vec,elem,middle+1,to);
		}
	}
	return false;
}

int main(){
	vector<int> vec = {6,1,2,3,4};
	vector<int> vec2 = {6,9,15,1,2,3,4,5};
	vector<int> vec1 = {1,2,3,4};
	// cout << isPresentRotated(vec2,4,0,vec2.size()-1) << endl;
	cout << isPresentRotated(vec2,8,0,vec2.size()-1) << endl;

	return 0;
}
