#include<iostream>
using namespace std;

class Line {

    private:
        double length;

    public: 
        Line(double len);
        ~Line();
        void setLength(double len);
        double getLength();

};

Line::Line(double len) {
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength() {
    return length;
}

Line::~Line() {
    cout << "Destructor called" << endl;
}

int main() {
    Line line(17.6);
    line.setLength(8.0);
    cout << "After update: Length of line: " << line.getLength() << endl;
    return 0;
}
