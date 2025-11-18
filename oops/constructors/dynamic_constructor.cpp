#include<iostream>
using namespace std;

class dyncons{
    
    private:
        int *p;

    public:
        dyncons() {
            p = new int;
            *p = 10;
        }

        dyncons(int v) {
            p = new int;
            *p = v;
        }

        int dis() {
            return (*p);
        }

};

int main() {
    dyncons o, o1(9);
    cout << "The value of object o's p is: " << o.dis() << endl;
    cout << "\nThe value of object o1's p is: " << o1.dis() << endl;
}
