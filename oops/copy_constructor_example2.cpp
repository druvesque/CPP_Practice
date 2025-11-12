#include<iostream>
#include<conio.h>
using namespace std;

class Example {

    private:
        int a, b;

    public:
        Example(int x, int y) {
            a = x;
            b = y;
            cout << "\nI'm constructor";
        }

        void Display() {
            cout << "\nValues: " << a << "\t" << b;
        }

};

int main() {
    Example Object1(10, 20);
    Example Object2(Object1);
    Object1.Display();
    Object2.Display(); 
    return 0;
}

