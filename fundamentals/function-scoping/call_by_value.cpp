#include<iostream>
using namespace std;

void swap(int x, int y) {
    int temp;
    temp = x; x = y; y = temp;
    return;
}

int main() {
    int a = 5;
    int b = 6;
    cout << "Before Swapping, a: " << a << ", b: " << b << endl;
    swap(a, b);
    cout << "After Swapping, a: " << a << ", b: " << b << endl;
    cout << "See, Call By Value doesn't change the value of the actual parameters." << endl;
    return 0;
}
