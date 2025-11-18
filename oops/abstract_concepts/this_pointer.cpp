#include<iostream>
using namespace std;

class Test {
    
    private:
        int x;

    public:
        void setX(int x) {
            this->x = x; // this references to the x attribute of the class
            // (*this).x = x; alternative statement
        }
        void print() {
            cout << "x: " << x << endl;
        }
};

int main() {
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}
