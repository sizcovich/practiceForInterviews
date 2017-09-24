#include <iostream>
#include <vector>

using namespace std;

vector<vector<string> > getNgrams(vector<string> vec){
	vector<vector<string> > res;
	vector<string> temp;
	int n = vec.size();
	for(int i=1;i<=n;++i){
		for(int j=0;j<n-i+1;++j){
			for(int k=j;k<i+j;++k){
				temp.push_back(vec[k]);
			}
			res.push_back(temp);
			temp.clear();
		}
	}
	return res;
}

int main(){
	vector<string> s = {"Hola","como","va"};
	vector<vector<string> > res = getNgrams(s);
	for(int i = 0; i<res.size();++i){
		for(int j=0;j<res[i].size();++j){
			cout << res[i][j] << ',';
		}
		cout << endl;
	}
	return 0;
}