#include<iostream>
using namespace std;

class MinValue;

class TwoValues {

    private:
        int a, b;

    public:
        TwoValues(int x = 1, int y = 1): a(x), b(y) {}
        friend class MinValue;

};

class MinValue {
    public:
        int minimum(TwoValues tv) {
            if (tv.a < tv.b)
                return tv.a;
            else
                return tv.b;
        }
};

int main() {
    TwoValues t1(10, 15);
    MinValue m1;
    cout << "Minimum of TwoValues(10, 15): " << m1.minimum(t1); 
    return 0;
}
