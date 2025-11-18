#include<iostream>
using namespace std;
class Point {

    private:
        int x, y;

    public:
        Point(int x1, int y1) {x = x1; y = y1;}
        Point(const Point &p2) {x = p2.x; y = p2.y;} // copy-constructor
        int getx() {return x;}
        int gety() {return y;}

};

int main() {
    Point p1(6, 8);
    Point p2(p1); // shallow-copy
    cout << "p1.x = " << p1.getx() << ", p1.y = " << p1.gety() << endl;
    cout << "p2.x = " << p2.getx() << ", p2.y = " << p2.gety() << endl;
    return 0;
}
