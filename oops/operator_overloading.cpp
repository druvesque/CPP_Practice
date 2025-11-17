#include<iostream>
using namespace std;

class Comp {

    private:
        int real;
        int imag;

    public:
        Comp(int r = 0, int i = 0): real(r), imag(i) {}
        void display() {
            cout << "Real = " << real << ", Imag = " << imag << endl;
        }
        Comp operator +(Comp a) {
            Comp temp;
            temp.real = real + a.real;
            temp.imag = imag + a.imag;
            return temp;
        }
};

int main() {
    Comp c1(10, 5);
    Comp c2(7, 2);
    Comp c;
    c1.display();
    c2.display();
    c = c1 + c2;
    c.display();
    return 0;
}
