#include<iostream>
using namespace std;

class Box {

    private:
        double length;
        double breadth;
        double height;

    public:
        void set_dimensions(double l, double b, double h) {
            length = l;
            breadth = b;
            height = h;
        }
        double get_volume() {
            return length * breadth * height;
        }
};

int main() {
    Box obj;
    obj.set_dimensions(12.25, 9.75, 4.55);
    cout << "Volume: " << obj.get_volume() << endl;
    return 0;
}
