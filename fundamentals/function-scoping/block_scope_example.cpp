#include<iostream>
using namespace std;

int main() {
    int y = 30;
    {
        int a = y;
        cout << "a: " << a << endl;
    }
    cout << "a: " << a << endl; // outside the scope
}
