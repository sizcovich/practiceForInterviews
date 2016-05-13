#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Node{
	public:
		int value;
		vector<Node*> children;
};

class Graph{
public:
	Node root;
};

int bfs(Graph g){
	queue<Node> q;
	Node node;
	int sum = 0;
	q.push(g.root);
	while(!q.empty()){
		node = q.front();
		q.pop();
		// cout << "value: " << node.value << endl;
		sum += node.value;
		// cout << "node children " << node.children.size() << endl;
    	for(int i = 0; i < node.children.size(); ++i){
    		// cout << "node children in for" << node.children[i].value << endl;
    		q.push(*node.children[i]);
    	}
	}
	return sum;
}

int dfs(Graph g){
	stack<Node> q;
	Node node;
	int sum = 0;
	q.push(g.root);
	while(!q.empty()){
		node = q.top();
		q.pop();
		// cout << "value: " << node.value << endl;
		sum += node.value;
		// cout << "node children " << node.children.size() << endl;
    	for(int i = 0; i < node.children.size(); ++i){
    		// cout << "node children in for" << node.children[i].value << endl;
    		q.push(*node.children[i]);
    	}
	}
	return sum;
}


int main(){
	Node *n = new Node;
	Node *p = new Node;
	Node *q = new Node;
	Node *r = new Node;
	Node *s = new Node;
	n->value = 5;
	p->value = 7;
	q->value = 6;
	r->value = 9;
	s->value = 1;
	std::vector<Node*> c1;
	std::vector<Node*> c2;
	std::vector<Node*> c3;
	std::vector<Node*> c4;
	c4.push_back(r);
	c4.push_back(s);
	c1.push_back(q);
	c1.push_back(p);
	r->children = c3;
	s->children = c3;
	p->children = c2;
	q->children = c4;
	n->children = c1;

	Graph *myGraph = new Graph;
	myGraph->root = *n;

	cout << "suma de todos: " << dfs(*myGraph) << endl; //debería dar 28

}