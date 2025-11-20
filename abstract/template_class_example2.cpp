#include<iostream>
using namespace std;

template<class T1, class T2>
void display(T1 a, T2 ch) {
    cout << "First: " << a << endl << "Second: " << ch << endl;
}

int main() {
    display(3, 'A');
    display(7.45, 7.987);
    display('a', 'z');
}
