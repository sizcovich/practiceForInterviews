#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Queue
{	private:
		vector<T> s;
	public:
		T next();
		void enqueue(T x);
		void dequeue();
		size_t size(){
			return s.size();
		};
		bool empty(){
			return s.empty();
		};
};

template <class T>
void Queue<T>::enqueue(T x)
{
  s.insert(s.begin(),x);
}

template <class T>
void Queue<T>::dequeue()
{
	if(!s.empty()){
		s.pop_back();
	}
	else{
		cerr<< "Problema" <<endl;
	}
}

template <class T>
T Queue<T>::next()
{
	if(!s.empty()){
		return s.back();
	}
	cerr<< "Problema" <<endl;
}

int main(){
	Queue<int> s;
	s.enqueue(3);
	s.enqueue(4);
	s.enqueue(5);
	s.dequeue();
	cout << s.next()<<endl;
	return 0;
}