#include<iostream>
#include<string>
using namespace std;

template<class T1 = int, class T2 = string, int size = 3>
class abc {

    public:
        T1 *m1;
        T2 *m2;

        abc() {
            m1 = new T1[size];
            m2 = new T2[size];
        }

        void display() {
            for(int i = 0; i < size ;i++) {
                cout << m1[i] << endl;
                cout << m2[i] << endl;
            }
        }
        
};

int main() {
    abc<> obj;
    obj.m1[0] = 4;
    obj.m1[1] = 45;
    obj.m1[2] = 13;
    obj.m2[0] = "first";
    obj.m2[1] = "second";
    obj.m2[2] = "third";
    obj.display();
    return 0;
}


