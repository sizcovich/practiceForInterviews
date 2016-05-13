#include <iostream>
using namespace std;

int moreApparitions(int m_array[], int n){
	int maximum = 0;
	int counterArray[1001];
	for (int i = 0; i < 1001; ++i){
		counterArray[i] = 0;
	}
	for (int i = 0; i < n; ++i){
		++counterArray[m_array[i]];
	}
	for(int i=0; i< 1001;++i){
		if(counterArray[i] > counterArray[maximum]){
			maximum = i;
		}
	}
	return maximum;
}

int main(){
	int array[15] = {1,2,50,3,4,1,1,6,50,10,2,50,50,50,50};
	cout << moreApparitions(array,15) << endl;
	return 0;
}