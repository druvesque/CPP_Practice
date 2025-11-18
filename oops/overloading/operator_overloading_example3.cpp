#include<iostream>
using namespace std;

class Box {

    private:
        double length;
        double height;
        double breadth;

    public:
        double get_volume() {
            return length * breadth * height;
        }
        void set_length(double len) {
            length = len;
        }
        void set_breadth(double b) {
            breadth = b;
        }
        void set_height(double h) {
            height = h;
        }
        Box Box::operator+(const Box& b) {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
        }
};

int main() {
    Box box1, box2, box3;
    double volume = 0.0;
    box1.set_length(6.0);
    box1.set_breadth(7.0);
    box1.set_height(5.0);
    box2.set_length(12.0);
    box2.set_breadth(13.0);
    box2.set_height(10.0);

    cout << "Volume of box1: " << box1.get_volume() << endl;
    cout << "Volume of box2: " << box2.get_volume() << endl;
    box3 = box1 + box2;
    cout << "Volume of box3: " << box3.get_volume() << endl;
    return 0;
}
