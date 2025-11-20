#include<iostream>
using namespace std;

double quotient(double a, double b) {

    if (b == 0)
        throw b;

    return a/b;
}

int main() {
    double numerator, denominator;
    cout << "Enter Numerator: " << endl;
    cin >> numerator;
    cout << "Enter Denominator: " << endl;
    cin >> denominator;

    try {
        cout << "Numerator: " << numerator << ", Denominator: " << denominator << endl;
        cout << "Result: " << quotient(numerator, denominator) << endl;
    }
    catch(double exception) {
        cout << "Cannot Divide by " << exception << endl;
    }
    return 0;
}
