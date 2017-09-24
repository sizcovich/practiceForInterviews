#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <queue>
#include <algorithm>
using namespace std;

class Graph {
    private:
        int vertex;
        vector<vector<int> > adjMatrix(this->vertex, vector<int>(this->vertex,-1));
    public:
        Graph(int n) {
            this->vertex = n;
        }
    
        void add_edge(int u, int v) {
            this->adjMatrix[u][v] = 6;
        }
    
        vector<int> shortest_reach(int start) {
            vector<int> distance;
            int actualDistance = 0;
            unordered_set<int> visited;
            queue<int> nodes;
            nodes.push(start);
            visited.insert(start);
            while(!nodes.empty()){
                int current = nodes.front();
                nodes.pop();
                if(visited.find(current) == visited.end()){
                    for(int i = 0; i<this->vertex;++i){
                        nodes.push(this->adjMatrix[current][i]);
                        visited.insert(this->adjMatrix[current][i]);
                        actualDistance +=6;
                        distance[i] = actualDistance;
                    }
                }
            }
            return distance;    
        }
    
};

int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {
      
      int n, m;
        cin >> n;
        // Create a graph of size n where each edge weight is 6: 
        Graph graph(n);
        cin >> m;
        // read and set edges
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            // add each edge to the graph
            graph.add_edge(u, v);
        }
      int startId;
        cin >> startId;
        startId--;
        // Find shortest reach from node s
        vector<int> distances = graph.shortest_reach(startId);

        for (int i = 0; i < distances.size(); i++) {
            if (i != startId) {
                cout << distances[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
