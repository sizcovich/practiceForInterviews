#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string compressor(string s){
    vector<int> comp(26);
    string myRes;
    for(int i = 0; i<s.size(); ++i){
        ++comp[(s[i]-'a')];
    }
    for(int i=0; i<comp.size(); ++i){
        if(comp[i]>0){
            myRes.push_back(i+'a');
            myRes.push_back((char)comp[i] + '0');
        }          
    }
    return myRes;
}

int main() {
    string a, b;
    getline(cin,a);
    getline(cin,b);
    int counter = 0;
    vector<int> countA(26), countB(26);
    for (int i = 0; i < a.size(); i++){
        cout << "a[i]-'a' " << a[i]-'a' << endl;
        ++countA[a[i]-'a'];
    }
    for (int i = 0; i < b.size(); i++){
        cout << "b[i]-'a' " << b[i]-'a' << endl;
        ++countB[b[i]-'a'];
    }
    
    for(int j = 0; j< 26; ++j){
        counter += abs(countA[j]-countB[j]);
    }
    
    cout << counter << endl;
    return 0;
}



// int main() {
//     string a, b;
//     getline(cin,a);
//     getline(cin,b);
//     int counter = 0;
//     string compA = compressor(a);
//     // cout << compA << endl;
//     string compB = compressor(b);
//     // cout << compB << endl;
//     int j = 0, i = 0;
//     while(i < compA.size()-2 || j < compB.size()-2){
//         if (i >= compA.size()-2 && j < compB.size() - 2){
//             for(int k = j; j < compB.size()-2; j+=2){
//                 counter += (int)compB[k+1];
//             }
//             return counter;
//         }
//         if (i < compA.size()-2 && j >= compB.size()-2){
//             for(int k = i; i < compA.size()-2; i+=2){
//                 counter += (int)compA[k+1];
//             }
//             return counter;
//         }
//         if(compA[j] == compB[i]){
//             if(compA[j+1] == compB[i+1]){
//                 j+=2;
//                 i+=2;
//             }
//             else{
//                 counter += abs((int)compA[i+1]-(int)compB[i+1]);
//                 cout << counter << endl;
//                 j+=2;
//                 i+=2;
//             }
//         }
//         else if(compA[j] > compB[i]){
//                 counter += (int)compB[i+1];
//                 cout << counter << endl;
//                 i+=2;
//         }
//         else{
//             counter += (int)compA[j+1];
//             cout << (int)compA[j+1] << endl;
//             j+=2;
//         }
//     }
//     cout << counter << endl;
//     return 0;
// }

