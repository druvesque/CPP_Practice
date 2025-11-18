#include<iostream>
using namespace std;

class Distance {

    private:
        int meter;

    public:
        Distance(): meter(0) {}
        friend int func (Distance);
};

int func(Distance d) {
    d.meter = 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << func(D) << endl;
    return 0;
}
