#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void printAsBinary(int bits) {
    for (int i=31; i >= 0; i--) {
        cout << ((bits>>i) & 1); 
    }
    cout << endl;
}

int main() {
    unsigned int actual = 0;
    int n;
    cin >> n;
    string k;getline(cin, k);
    getline(cin, k);
    unsigned int global = ~0;
    for(unsigned int i = 0; i < n; ++i) {
        getline(cin, k);
        actual = 0;
        for(unsigned int j = 0; j < k.size(); ++j){
            actual = actual | (1 << (k[j] - 'a'));
        }
        global = global & actual;
    }
    int sum=0;
    for(unsigned int i = 0; i < sizeof(unsigned int)*8; ++i){
        sum += (global & 1);
        global = global>>1;
    }
    cout << sum << endl;
    return 0;
}