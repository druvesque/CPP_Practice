#include<iostream>
using namespace std;

class Poly {

    public:
        void func(int x) {
            cout << "Value of x: " << x << endl;
        }
        void func(double x) {
            cout << "Value of x: " << x << endl;
        }
        void func(int x, int y) {
            cout << "Value of X: " << x << ", " << y << endl;
        }
};

int main() {
    Poly obj;
    obj.func(7);
    obj.func(9.132);
    obj.func(85, 64);
    return 0;
}

