#include<iostream>
using namespace std;

class Base {

    public:
        virtual void show() {
            cout << "Base Class";
        }
};

class Derived:public Base {

    public:
        void show() {
            cout << "Derived Class";
        }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
