#include <iostream>
#include <vector>
#include <bitset> 
using namespace std;

vector<int> primeNumbers(int n){
	vector<int> primeArray;
	vector<bool> arrayOfPrime(n);
	for (int i = 0; i<n; ++i){
		arrayOfPrime[i] = 1;
	}
	if (n >= 2){
		primeArray.push_back(2);
	}
	for (int i=3;i<=n-2; i+=2){
    	for (int j=3;j<i; j+=2){
        	if (i%j==0){
        		arrayOfPrime[i] = 0;
            	break;
       		}
    	}
    	if(arrayOfPrime[i])
    		primeArray.push_back(i);
    }
    return primeArray;
}

int main(){
	vector<int> k = primeNumbers(98);
	int i = 0;
	while(k[i] != 0){
		cout << k[i] << endl;
		++i;
	}		
	return 0;
}