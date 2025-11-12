// TODO: COPY AND DYNAMIC CONSTRUCTORS LEFT
#include<iostream>
using namespace std;

class Complex {
    
    private:
        float real;
        float imag;
    
    public:
        Complex(float r, float i);
        Complex (Complex &c);
        float getReal();
        float getImag();
        void add(Complex &c);
        ~Complex();
};

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

//Complex::Complex(Complex &c) {
//    
//}

float Complex::getReal() {
    return real;
}

float Complex::getImag() {
    return imag;
}

void Complex::add(Complex &c) {
    cout << "The sum is: " << this->getReal() + c.getReal() << " + i" << this->getImag() + c.getImag() << endl;
}

Complex::~Complex() {
    cout << "Destructor called\n";
}

int main() {
    Complex c1(5.0, 9.6);
    Complex c2(1.2, 0.4);
    c1.add(c2);
    return 0;
}
