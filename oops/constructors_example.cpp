#include<iostream>
#include<cmath>
#define PI 22/7
using namespace std;
class Circle {

    private:
        double radius;

    public:
        Circle() {       // default-constructor
            radius = 0; 
        }

        Circle(double r) {   // parameterized-constructor
            radius = r;
        }

        Circle(Circle &t) {  // copy-constructor
            radius = t.radius;
        }

        void setRadius(double r) {
            radius = r;
        }

        double getArea() {
            return PI * pow(radius, 2);
        }

        ~Circle()  {} // destructor

};

int main() {
    Circle c1;
    Circle c2(2.5);
    Circle c3(c2);
    cout << c1.getArea() << endl;
    cout << c2.getArea() << endl;
    cout << c3.getArea() << endl;
    return 0;
}

