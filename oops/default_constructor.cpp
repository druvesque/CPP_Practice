#include<iostream>
using namespace std;
class construct {

    public:
        int a, b;
        construct() {
            cout << "Constructor called!" << endl;
            a = 10; b = 20;
            cout << "Values set using constructor" << endl;
        }
};

int main() {
    construct c;
    cout << "a: " << c.a << endl << "b: " << c.b;
    return 0;
}
