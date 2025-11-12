// TODO: COPY AND DYNAMIC CONSTRUCTORS LEFT
#include<iostream>
using namespace std;

class Complex {
    
    private:
        float real;
        float imag;
        float *real_part;
        float *imag_part;
    
    public:
        Complex(float r, float i);
        Complex (Complex &c);
        float getReal();
        float getImag();
        void add(Complex &c);
        ~Complex();
};

Complex::Complex(float r, float i, int type) {   // parameterized & dynamic constructor together
    if (!type) {
        real = r;
        imag = i;
    }
    else {
        real_part = new float;
        *real_part = r;
        imag_part = new float;
        *imag_part = i;
    }
}

Complex::Complex(Complex &c) {         // copy-constructor
    c.real = real;
    c.imag = imag;
}

float Complex::getReal(int type) {
    if (!type)
        return real;
    else
        return *real_part;
}

float Complex::getImag(int type) {
    if (!type)
        return real;
    else
        return *imag_part;
}

void Complex::add(Complex &c, int type) {
    cout << "The sum is: " << this->getReal(type) + c.getReal(type) << " + i" << this->getImag(type) + c.getImag(type) << endl;
}

Complex::~Complex() {
    cout << "Destructor called\n";
}

int main() {
    int type;
    cin >> type;
    float real, imag;
    cin >> real >> imag;
    
    return 0;
}
