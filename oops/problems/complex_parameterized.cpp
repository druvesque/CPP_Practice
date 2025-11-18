#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;

    public:
        Complex();
        Complex(float r, float i);
        void add(Complex &c);
        float getReal();
        float getImag();
        ~Complex();
 
};

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

inline float Complex::getReal() {
    return real;
}

inline float Complex::getImag() {
    return imag;
}

void Complex::add(Complex &c) {
    cout << "The sum is: " << c.getReal() + real << " + i" << c.getImag() + imag << "\n" << endl;
}

Complex::~Complex() {
    cout << "The destructor is called!";
}

int main() {
    Complex obj1(8.4, 2.1);
    Complex obj2(6.7, 9.8);
    obj2.add(obj1); 
    return 0;
}
