#include <iostream>
#include <vector>

using namespace std;

vector<string> permute(string &elems, int mid, int end)
{
    vector<string> perms;
    perms.push_back(elems);
    if (mid == end) {
        return perms;
    }
    for (int i = mid; i <= end; i++) {
        swap(elems[mid], elems[i]);
        // perms.push_back(elems);
        permute(elems, mid + 1, end);
        swap(elems[mid], elems[i]);
    }
}

int main(){
    string n = "casa";
    vector<string> k = permute(n, 0, n.size());
    // cout << n << endl;
    for(int i = 0; i < k.size(); ++i){
        cout << k[i] << endl;
    }
    return 0;
}