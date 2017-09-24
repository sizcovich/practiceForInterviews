#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int flavor, int index) {
            this->flavor = flavor;
            this->index = index;
       };
    
};
    
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
   int middle = (last-first)/2 + first;
   if(last-first == 1 && arr[middle].flavor != search){
       return -1;
   }
   if(arr[middle].flavor < search){
       binarySearch(middle+1,last,arr,search);
   }
    else if(arr[middle].flavor > search){
        binarySearch(first,middle-1,arr,search);
    }
    return arr[middle].index;
}

bool compare(const IceCream& lhs, const IceCream& rhs){
          return lhs.flavor < rhs.flavor;
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }
        
        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }

    }

}

