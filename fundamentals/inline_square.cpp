#include<iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of -10: " << square(-10) << endl;
    cout << "Square of 0: " << square(0) << endl;
    return 0;
}
