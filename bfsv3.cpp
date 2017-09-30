#include <cstdio>
#include <unordered_set>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Node{
public:
	int data;
	vector<Node*> children;
};

int bfs(Node* n){
	unordered_set<Node*> visited;
	queue<Node*> q;
	q.push(n);
	int sum = 0;
	while(!q.empty()){
		Node* act = q.front();
		sum+=act->data;
		q.pop();
		visited.insert(act);
		for(int i=0;i<(act->children).size();++i){
			if(visited.find(act->children[i]) == visited.end()){
				q.push(act->children[i]);
			}
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
	n->data = 5;
	p->data = 7;
	q->data = 6;
	r->data = 9;
	s->data = 1;
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
	cout << bfs(n) << endl;
	return 0;
}

