#include<iostream>
using namespace std;

class Top {

    public:
        int a;
        void put_data() {
            cout << "Enter first number: ";
            cin >> a;
        }
        void get_data() {
            cout << "\nFirst Number is: " << a;
        }

};

class Middle:public Top {
    
    public:
        int b;
        void square() {
            put_data();
            b = a*a;
            cout << "\nSquare is: " << b;
        }
};

class Bottom:public Middle {
    
    public:
        int c;
        void cube() {
            square();
            c = b*a;
            cout << "\nCube: " << c;
        }

};

int main() {
    system("cls");
    Bottom b1;
    b1.cube();
    return 0;
}
