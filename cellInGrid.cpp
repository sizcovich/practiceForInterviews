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

vector<vector<int> > createAdjMatrix(vector< vector<int> > grid, int sum){
    int fila = grid[0].size();
    int columna = grid.size();
    vector<vector<int> > adjMatrix(sum, vector<int>(sum));
    for(int i = 0; i<grid[0].size()-1; i++){
        for(int j = 0; j<grid.size()-1; j++){
            if(grid[i][j] == 1){
                adjMatrix[i*fila+j][i*fila+j] = 1;
                if(grid[i][j+1] == 1){
                    adjMatrix[i*fila+j][i*fila+j+1] = 1;
                }
                if(grid[i+1][j] == 1){
                    adjMatrix[i*fila+j][(i+1)*fila+j] = 1;
                }
                if(grid[i+1][j+1] == 1){
                    adjMatrix[i*fila+j][(i+1)*fila+(j+1)] = 1;
                }
            }
        }
    }
    return adjMatrix;
}

int matrixSum(vector<vector<int> > vec){
    int sum = 0;
    for(int i=0; i<vec.size(); ++i){
        for(int j = 0; j<vec[0].size(); j++){
            sum+= vec[i][j];
        }
    }
    return sum;
}

int vectorSum(vector<int> vec){
    int sum = 0;
    for(int i=0; i<vec.size(); ++i){
       sum+= vec[i];
    }
    return sum;
}

int dfsCount(vector<vector<int> > adjMatrix, int sum, int s){
    stack<int> stack;
    vector<int> visited(sum);
    stack.push(s);
    visited[s] = 1;
    while(!stack.empty()){
        int node = stack.top();
        stack.pop();
        for(int j = 0; j<adjMatrix[0].size(); j++){
            if(adjMatrix[s][j] == 1 && visited[j] == 0){
                stack.push(j);
                visited[j] = 1;
            }
        }
    }
    return vectorSum(visited);
}

int get_biggest_region(vector< vector<int> > grid) {
    int sum = matrixSum(grid);
    vector<vector<int> > adjMatrix = createAdjMatrix(grid,sum);
    int max = 0;
    vector<int> children;
    for(int i = 0; i<adjMatrix.size(); i++){
        int val = dfsCount(adjMatrix, sum, i);
        if(val > max){
            max = val;
        }    
    }
  return max;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    int sum = matrixSum(grid);
    vector<vector<int> > vec = createAdjMatrix(grid,sum);
    for(int i=0;i<vec.size();++i){
        for(int j=0; j<vec[0].size();++j){
            cout << vec[i][j] << endl;
        }
    }
    //cout << get_biggest_region(grid) << endl;
    return 0;
}