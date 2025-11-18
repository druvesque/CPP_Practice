#include<iostream>
using namespace std;
class addition {

    private:
        int num1, num2;

    public:
        addition(int a, int b) { // parameterized-constructor
            num1 = a;
            num2 = b;
        }

        void add();
};

inline void addition::add() {
    cout << "Result: " << num1 + num2 << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    addition add_obj(a, b);
    add_obj.add();
    return 0;
}
