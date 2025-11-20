#include<iostream>
using namespace std;

template<class T1, class T2>
class abc {

    public:
        T1 m1;
        T2 m2;

        abc(T1 a, T2 b) {
            m1 = a;
            m2 = b;
        }

        void display() {
            cout << m1 << endl << m2 << endl;
        }
};

int main() {
    abc<int,char> obj(1, 'c');
    obj.display();
    return 0;
}
