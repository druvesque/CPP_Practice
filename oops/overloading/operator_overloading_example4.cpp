#include<iostream>
using namespace std;

class xyz {

    private:
        int x;
        int y;
        int z;

    public:

        void get() {
            cout << "Enter XYZ please\n";
            cin >> x >> y >> z;
        }

        void disp() {
            cout << x << y << z << endl;
        }

        void friend operator-(xyz& s);


} s1;

void operator-(xyz& s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main() {
    s1.get();
    cout << "Before Overloading\n";
    s1.disp();
    cout << "After Overloading\n";
    -s1;
    s1.disp();
    return 0;
}
