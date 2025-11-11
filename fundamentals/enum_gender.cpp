#include<iostream>
using namespace std;
int main() {
    
    enum gender1{male, female};
    enum gender2{man, woman, transgender};

    gender1 rohit;
    gender2 suman;

    rohit = male;
    suman = woman;
    cout << rohit << suman << endl;
    return 0;
}
