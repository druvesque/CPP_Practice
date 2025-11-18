#include<iostream>
using namespace std;

void example() {
    for (int j = 0; j < 10; j++) {
        int k = j * 10;
        cout << "j: " << j << ", k: " << k << endl;
        {
            int m = j + k;
            cout << "m: " << m << ", j: " << j << endl;
        }
    }
}

int main() {
    example();
    return 0;
}
