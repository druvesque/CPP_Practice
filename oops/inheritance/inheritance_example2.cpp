#include<iostream>
#include<conio.h>
using namespace std;

class Emp {

    public:
        int eno;
        char name[20], des[20];
        void get() {
            cout << "Enter ENO: ";
            cin >> eno;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Designation: ";
            cin >> des;
        }
        
};

class Salary:public Emp {

    private:
        float base_pay;
        float hra;
        float dra;
        float pf;
        float net;

    public:
        void get1() {
            cout << "Enter base pay: ";
            cin >> base_pay;
            cout << "Enter Human Resources Allowance: ";
            cin >> hra;
            cout << "Enter Dearness Allowance: ";
            cin >> dra;
            cout << "Enter the Provident Fund: ";
            cin >> pf;
        }

        void calculate() {
            net = base_pay + hra + dra + pf;
        }

        void display() {
            cout << eno << "\t" << name << "\t" << des << "\t" << base_pay << "\t" << hra << "\t" << dra << "\t" << pf << "\t" << net << "\n";
        }
}; 

int main() {
    int i, n;
    char ch;
    Salary s[10];
    system("cls");
    cout << "Enter the number of employees: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\nE_no \t Name\t des\t bp \t hra\t dra\t pf \tnp\n";
    for(i = 0; i<n;i++) {
        s[i].display();
    }
    return 0;
}
