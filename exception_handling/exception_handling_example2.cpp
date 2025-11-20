#include<iostream>
#include<stdexcept>
using namespace std;

class DivideByZeroException:public runtime_error {

    public:
        DivideByZeroException():runtime_error("Attempted to divide by Zero.") {}

};

double quotient(double num, double den) {
    if(den == 0) {
        throw DivideByZeroException();
    }
    return num/den;
}
int main() {
    double num1, num2;
    cout << "Enter 2 integers: " << endl;
    cin >> num1 >> num2;

    try {
        cout << "Quotient: " << quotient(num1, num2) << endl;
    }
    catch (const DivideByZeroException& e) {
        cout << "Exception Occured. " << e.what() << endl;
    } 
    return 0;
}
