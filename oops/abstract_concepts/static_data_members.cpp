#include<iostream>
using namespace std;

class foo {

    private:
        static int count;

    public:
        foo() {
            cout << "Constructor called\n";
            count++;
        }

        int getcount() {
            return count;
        }
};

int foo::count = 0;

int main() {
    foo f1, f2, f3;
    cout << "Count: " << f1.getcount() << endl;
    cout << "Count: " << f2.getcount() << endl;
    cout << "Count: " << f3.getcount() << endl;
    return 0;
}
