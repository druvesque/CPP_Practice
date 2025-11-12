#include<iostream>
#include<string>
using namespace std;

class Example {

    private:
        int x;
        string y;
    
    public:
        Example(int x1) {
            cout << "Constructor Called" << endl;
            x = x1;
            y = "Not entered";
        }

        Example(int x1, string y1) {
            cout << "Constructor Called" << endl;
            x = x1;
            y = y1;
        }

        ~Example() {
            cout << "Destructor called" << endl;
        }

        void updatex(int x1) {
            x = x1;
        }

        void displayx() {
            cout << "X: " << x << endl;
        }
};

int main() {
    Example e1(15);
    Example e2(20, "Summit");
    e1.updatex(30);
    e1.displayx();
}

