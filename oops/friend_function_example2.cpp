#include<iostream>
using namespace std;

class Box {

    private:
        double width;

    public:
        friend void print_width(Box box);
        void set_width(double wid);
};

void Box::set_width(double wid) {
    width = wid;
}

void print_width(Box box) {
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box;
    box.set_width(10.5);
    print_width(box);
    return 0;
}
