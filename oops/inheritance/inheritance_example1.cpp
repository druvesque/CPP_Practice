#include<iostream>
using namespace std;

class Shape {

    protected:
        int width;
        int height;

    public:

        void set_width(int w) {
            width = w;
        }

        void set_height(int h) {
            height = h;
        }

};

class Rectangle: public Shape {

    public:
        int get_area() {return (width * height);}
};

int main() {
    Rectangle Rect;
    Rect.set_width(5);
    Rect.set_height(7);
    cout << "Total area: " << Rect.get_area() << endl;
    return 0;
}
