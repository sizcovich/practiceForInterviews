#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
   vector<int> vecA, vecB;
   for(int i=0; i<a.size();++i){
       vecA[a[i]-'a']+=1;
   }
   for(int i=0; i<b.size();++i){
       vecB[b[i]-'a']+=1;
   }
   int diferencia = 0;
   for(int i = 0; i<'z'-'a'; ++i){
       diferencia += abs(vecA[i]-vecB[i]);
   }
    return diferencia;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}