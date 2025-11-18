#include<iostream> 
using namespace std;
int g; // global variable
int main() {
    int a, b; // local variables
    // initialization
    a = 10;
    b = 40;
    g = a + b;
    cout << g;
    return 0;
}
