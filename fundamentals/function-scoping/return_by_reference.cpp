#include<iostream>
using namespace std;

int x = 90;

int& setX();

int main() {
    int& b = setX();
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;
    cout << "&b = " << &b << endl;
    cout << "&x = " << &x << endl;
    return 0;
}

int& setX() {
    return x;
}
