#include<iostream>
using namespace std;
int main() {
    enum gender {Male, Female};
    enum color {Red, Green};

    gender gend = Male;
    color col = Red;
    if(gend == col)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    return 0;
}
