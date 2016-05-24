#include<iostream>

using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area () {return width*height;}
};

void Rectangle::set_values(int x, int y){
	width = x;
	height = y;
}

int main(){
	Rectangle *newRec = new Rectangle;
	cout << "newRec " << (*newRec).area() << endl;
	Rectangle x;
	cout << "x " << x.area() << endl;
	// rect.set_values(3,4);
	// cout << "rect " << rect.area() << endl;
	return 0;
}