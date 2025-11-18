#include<iostream>
using namespace std;

class Accounts {

    private:
        double sales;
        double purchase;

    public:
        void read() {
            cout << "Enter Sales (in $): ";
            cin >> sales;
            cout << "Enter Purchase (in $): ";
            cin >> purchase;
        }
        friend double tax(Accounts);

};

double tax(Accounts a1) {
    return ((0.04) * (a1.sales - a1.purchase));
};

int main() {
    Accounts acc;
    acc.read();
    cout << "Total tax to pay: " << tax(acc) << "$";
    return 0;
}

