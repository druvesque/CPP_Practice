#include<iostream>
using namespace std;

class Square;

class Rectangle {

    private:
        int width;
        int height;

    public:
        Rectangle(int w = 1, int h = 1): width(w), height(h) {}
        void display() {
            cout << "Rectangle: " << width * height << endl;
        }
        void morph(Square &);
};

class Square {

    private:
        int side;

    public:
        Square(int s = 1):side(s) {}
        void display() {
            cout << "Square: " << side * side << endl;
        }
        friend class Rectangle;
};

void Rectangle::morph(Square &s) {
    width = s.side;
    height = s.side;
}

int main() {
    Rectangle r1(5, 10);
    Square s1(7);
    cout << "Before: " << endl;
    r1.display();
    s1.display();
    r1.morph(s1);
    cout << "\nAfter: " << endl;
    r1.display();
    s1.display();
    return 0;
}
