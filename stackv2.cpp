#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Stack
{	private:
		vector<T> s;
	public:
		T top();
		void push(T x);
		void pop();
		size_t size(){
			return s.size();
		};
		bool empty(){
			return s.size()==0;
		};
};

template <class T>
void Stack<T>::push(T x)
{
  s.push_back(x);
}

template <class T>
void Stack<T>::pop()
{
	if(s.empty()){
		s.pop_back();
	}
  	
}

template <class T>
T Stack<T>::top()
{
	if(s.empty()){
		return s.back();
	}
	throw "Problema";
}

int main(){
	Stack<int> s;
	s.push(3);
	s.push(4);
	s.push(5);
	cout << s.top()<<endl;
	return 0;
}