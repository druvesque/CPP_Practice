#include<iostream>
using namespace std;
class Line {

    private:
        double length;

    public:
        Line(double len);
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

int main() {
    Line line(15.6);
    line.setLength(18.95);
    cout << "After changing, Length of line: " << line.getLength() << endl;
    return 0;
}
