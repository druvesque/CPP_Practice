#include<iostream>
using namespace std;

enum roll_no {
    satya = 70,
    aakanksh = 74,
    sanket = 54,
    avinash = 68,
    shreya = 47,
    nikita = 69
};

int main() {
    roll_no obj;
    obj = shreya;
    cout << "The roll no. of Shreya is: " << shreya << endl;
    return 0;
}
