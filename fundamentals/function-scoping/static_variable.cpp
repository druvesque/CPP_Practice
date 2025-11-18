#include<iostream>
using namespace std;

void dec();

int main() {
    dec();
    dec();
    return 0;
}

void dec() {
    static int i = 4;
    cout << i << endl;
    i--;
}
