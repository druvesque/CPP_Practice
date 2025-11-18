#include<iostream>
#include<iomanip>
using std::setw;
using namespace std;

class PhoneNumber {
    
    private:
        char area_code[4];
        char exchange[4];
        char line[5];

    public:
        friend ostream& operator<<(ostream&, const PhoneNumber&);
        friend istream& operator>>(istream&, PhoneNumber&);

};

ostream& operator<<(ostream& output, const PhoneNumber &num) {
    output << "(" << num.area_code << ")" << num.exchange << "-" << num.line;
}

istream& operator>>(istream& input, PhoneNumber &num) { 
    input.ignore();
    input.ignore();
    input.ignore();
    input >> setw(4) >> num.area_code;
    input.ignore(2);
    input >> setw(4) >> num.exchange;
    input >> setw(5) >> num.line;
    return input;
}

int main() {
    PhoneNumber phone;
    cout << "Enter phone number in the form (123) 456-7890: \n";
    cin >> phone;
    cout << "The phone number entered was: " << phone << endl;
    return 0;
}



