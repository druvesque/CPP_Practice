#include<iostream>
using namespace std;

class Complex {

    private:
        float *real;
        float *imag;

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
    *real = 0;
    *imag = 0;
}

Complex::Complex(Complex &c) {
    *real = c.getReal();
    *imag = c.getImag();
}

Complex::Complex(float r, float i) {
    real = new float;
    *real = r;
    imag = new float;
    *imag = i;
}

void Complex::add(Complex &c) {
    cout << "The sum is: " << *real + c.getReal() << " + i" << *imag + c.getImag() << "\n" << endl; 
}

inline float Complex::getReal() {
    return *real;
}

inline float Complex::getImag() {
    return *imag;
}

Complex::~Complex() {
    cout << "Destructor is called!" << endl;
}

int main() {
    Complex obj1(8.7, 9.8);
    Complex obj2(7.3, 2.2);
    obj2.add(obj1);
    return 0;
}
