#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char>
class myClass {

    public:
        T1 data1;
        T2 data2;
        T3 data3;

        myClass(T1 a, T2 b, T3 c) {
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void display() {
            cout << this->data1 << endl << this->data2 << endl << this->data3<<endl;
        }
};

int main() {
    myClass<float, char, char> obj(8.3, 'c', 'm');
    obj.display();
    return 0;
}
