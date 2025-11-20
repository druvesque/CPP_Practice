#include<iostream>
using namespace std;

class Polygon {

    protected:
        int width, height;

    public:
        void set_values(int a, int b) {
            width = a;
            height = b;
        }
        virtual int area() = 0;
        void printarea() {
            cout << this->area() << endl;
        }

};

class Rectangle:public Polygon {

    public:
        int area() {
            return (width * height);
        }

};

class Triangle:public Polygon {

    public:
        int area() {
            return (width*height/2);
        }

};

int main() {
    Rectangle r1;
    Triangle t1;
    Polygon *p1 = &r1;
    Polygon *p2 = &t1;
    p1->set_values(4,5);
    p2->set_values(4,5);
    cout << "Area of Rectangle: " << p1->area() << endl;
    cout << "Area of Triangle: " << p2->area() << endl;
    return 0;
}
