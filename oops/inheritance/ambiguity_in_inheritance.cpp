#include<iostream>
using namespace std;

class M {

    public:
        void display() {
            cout << "Class M" << endl;
        }
};

class N {

    public:
        void display() {
            cout << "Class N" << endl;
        }
};

class P: public M, public N {

    public:
        void display() {
            M::display();
        }
        void result() {
            cout << "Class P" << endl;
        }
};

class Q: public M, public N {

    public:
        void display() {
            cout << "Class Q" << endl;
        }
};

int main() {
    P obj1;
    obj1.display();
    Q obj2;
    obj2.M::display();
    obj2.N::display();
    return 0;
}
