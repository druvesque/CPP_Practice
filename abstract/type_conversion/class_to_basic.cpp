#include<iostream>
#include<cmath>
using namespace std;

const int SIZE = 10;

class Vector {

    private:
        double v[SIZE];

    public:
        void set_array() {
            for(int j = 0; j < SIZE; j++)
                cin >> v[j];
        }

        void get_array() {
            cout << "Array you entered: " << endl;
            for(int j = 0; j<SIZE; j++)
                cout << v[j] << "\t";
        }

        operator double();
};

Vector::operator double() {
    double sum = 0;
    for(int i = 0; i < SIZE; i++) 
        sum = sum + (v[i] * v[i]);
    return sqrt(sum);
}

int main() {
    double d;
    Vector a;
    a.set_array();
    a.get_array();
    d = a;
    cout << "d is: " << d << endl;
    return 0;
}

