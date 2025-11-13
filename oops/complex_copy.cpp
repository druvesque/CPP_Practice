#include<iostream>
using namespace std;

class Complex {
    
    private:
        float real;
        float imag;

    public:
        Complex();
        Complex(float r, float i);
        Complex(Complex &c);
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

Complex::Complex(Complex &c) {
    real = c.getReal();
    imag = c.getImag();
}

inline float Complex::getReal() {
    return real;
}

inline float Complex::getImag() {
    return imag;
}

void Complex::add(Complex &c) {
    cout << "The sum is: " << real + c.getReal() << " + i" << imag + c.getImag() << endl;
}

Complex::~Complex() {
    cout << "\nThe destructor is called!";
}

int main() {
    Complex obj1(8.8, 3.5);
    Complex obj2(obj1);
    obj2.add(obj1);
    return 0;
}
