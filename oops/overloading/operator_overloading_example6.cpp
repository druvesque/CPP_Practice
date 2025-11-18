#include<iostream>
using namespace std;

class Complex {

    private:
        double p;
        double q;

    public:
        Complex(double a, double b) {
            p = a;
            q = b;
        }

        Complex(double a) {
            p = a;
            q = 0;
        }

        double real_part() {
            return p;
        }

        double imag_part() {
            return q;
        }

        Complex operator+(const Complex a) const {
            return Complex(a.p + p, a.q + q);
        }

        Complex operator+(double a) const {
            return Complex(p + a, q);
        }

        Complex operator-(const Complex a) const {
            return Complex(p - a.p, q - a.q);
        }

        Complex operator-(double a) const {
            return Complex(p -a, q);
        }

        friend ostream &operator<<(ostream &s, const Complex &r);
};

ostream &operator<<(ostream &s, const Complex &r) {
    if (r.imag_part() == 0)
        return s<<r.real_part();
    else if(r.imag_part() < 0) {
        if (r.real_part() == 0) 
            return s<<r.imag_part()<<"i";
        else
            return s<<r.real_part()<<r.imag_part()<<"i";
    }
    else{
        if(r.real_part() == 0)
            return s << r.imag_part() << "i";
        else
            return s << r.real_part() << " + " << r.imag_part() << "i";
    }
}


int main() {
    double a, b;
    cout << "Enter 2 Numbers: ";
    cin >> a >> b;

    Complex r = Complex(a, b);
    cout << "\nThe Complex form is r = "<<r << endl;
    Complex t = Complex(7.0);
    cout << "\nGiven t = "<<t << endl;

    cout << "\nThen, r + t = " << (r+t) << endl;
    cout << "\nThen, r - (4 + 2i) = " << (r - Complex(4,2)) << endl;
    cout << "\nThen, r + (2 + 2i) = " << (r + Complex(2,2)) << endl;
    return 0;
}
