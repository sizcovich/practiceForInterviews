#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

class Node{
	public:
		int value;
		vector<Node*> children;
};

int sumNodes(Node* tree){
	set<Node*> nodes;
	queue<Node*> container;
	container.push(tree);
	nodes.insert(tree);
	int sum = 0;
	while(!container.empty()){
		Node* current = container.front();
		container.pop();
		sum+=current->value;
		for(int i=0;i<(current->children).size();++i){
			if(nodes.find((current->children)[i]) == nodes.end()){
				container.push(current->children[i]);
				nodes.insert(current->children[i]);
			}
		}
	}
	return sum;
}

int main(){
	Node* p = new Node();
	Node* q = new Node();
	Node* x = new Node();
	Node* z = new Node();
	Node* r = new Node();
	vector<Node*> vecp;
	vector<Node*> vecq;
	vector<Node*> vecx;
	vector<Node*> vecz;
	vector<Node*> vecr;
	p->value = 3;
	p->children = vecp;
	q->value = 6;
	q->children = vecq;
	r->value = 10;
	r->children = vecr;
	q->children.push_back(r);
	p->children.push_back(q);
	x->value = 1;
	x->children = vecx;
	p->children.push_back(x);
	z->value = 8;
	z->children = vecz;
	p->children.push_back(z);

	cout << sumNodes(p) << endl;

}