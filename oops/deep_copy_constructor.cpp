// TODO: CHECK HOW MEMORY IS ALLOCATED IN HEAP AND COMPARE IT WITH THE PRINTS THAT ARE BEING GIVEN HERE
#include<iostream>
using namespace std;
class Line {

    private:
        int *ptr;

    public: 
        Line(int len); // simple-constructor
        Line(const Line &obj); // copy-constructor
        ~Line(); // destructor
        int getLength();
        void setLength(int len);
        void display(Line obj);

};

Line::Line(int len) {
    cout << "Normal constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj) {
    cout << "Copy constructor allocating ptr" << endl; 
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line() {
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength() {
    return *ptr;
}

void Line::setLength(int len) {
    *ptr = len;
}

void display(Line obj) {
    cout << "Length of line: " << obj.getLength() << endl;
}

int main() {
    Line line1(10);
    Line line2(line1);
    line1.setLength(20);
    display(line1);
    display(line2);

    return 0;
}
