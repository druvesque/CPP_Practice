#include<iostream>
using namespace std;

class A {

    private:
        int a;

    public:
        A() {
            a = 1;
        }
        virtual void show() {
            cout << a;
        }

};

class B:public A {

    private:
        int b;

    public:
        B() {
            b = 2;
        }
        void show() {
            cout << b;
        }

};

int main() {
    A *pA;
    B obj;
    pA = &obj;
    pA->show();
    return 0;
}
