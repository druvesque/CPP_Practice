#include<iostream>
using namespace std;

template<class T>
T maximum(T a, T b, T c) {
    T max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main() {
    // int a = maximum<int>(9, 5, 11);
    // cout << a;
    cout << maximum('g', 'm', 'b');
    return 0;
}
