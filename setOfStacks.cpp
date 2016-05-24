// Imagine a (literal) stack of plates. If the stack gets too high, it might topple. Therefore, in real life, we would likely start a new stack when the previous stack exceeds somethreshold. Implement a data structureSetOf Stacks that mimics this. SetOfStacks should be composed of several stacks and should create a new stack once the previous one exceeds capacity. SetOf Stacks. push() and SetOf Stacks. pop() should behave identically to a single stack (that is,popO should return the same values as it would if there were just a single stack).

#include <iostream>
#include <stack>

using namespace std;

template<typename T>
class setOfStack{
private:
stack<stack<T> *> *externalStack;

int sizeStack;
public:
setOfStack(){
	externalStack = new stack<stack<T> *>;
	stack<T> *internalStack = new stack<T>;
	externalStack->push(internalStack);
	sizeStack = 0;
}

~setOfStack(){
	for(int i = 0; i < externalStack->size(); ++i){
		free(externalStack->top());
		externalStack->pop();
	}
	free(externalStack);
}

int size(){
	return sizeStack;
}

int capacity;

void push(T elem){
	stack<T> *actual = externalStack->top();
	if (actual->size() == capacity){
		stack<T> *newStack = new stack<T>;
		newStack->push(elem);
		externalStack->push(newStack);
	}
	else{
		actual->push(elem);
	}
	sizeStack++;
}

void pop(){
	if(externalStack->top()->size() > 0){
		stack<T> *topStack = externalStack->top();
		topStack->pop();
		if (topStack->size() == 0){
			free(topStack);
			externalStack->pop();
		}

		sizeStack--;
	}
	else{
		throw invalid_argument("There are no more elements");
	}
}

T top(){
	if(externalStack->top()->size() > 0){
		stack<T> *topStack = externalStack->top();
		return topStack->top();
	}
	else{
		throw invalid_argument("There are no more elements");
	}
}

};

int main(){
	setOfStack<int> *s = new setOfStack<int>;
	(*s).capacity = 3;
	(*s).push(1);
	(*s).push(2);
	(*s).push(3);
	(*s).push(4);
	(*s).push(3);
	(*s).push(4);
	int size = (*s).size();
	for(int i = 0; i < size; ++i){
		cout << s->top() <<endl;
		s->pop();
	}
	return 0;
}