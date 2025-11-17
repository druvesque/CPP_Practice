#include<iostream>
using namespace std;

class example {

    private:
        int *p;

    public:
        example() {
            p = new int;
            *p = 10;
        }

        example(int v) {
            p = new int;
            *p = v;
        }

        int dis() {
            return (*p);
        }
};

int main() {
    example obj1, obj2(19);
    cout << "The value of obj1.p: " << obj1.dis() << endl;
    cout << "The value of obj2.p: " << obj2.dis() << endl;
    return 0;
}
