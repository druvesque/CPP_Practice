#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[10] = "Hello";
    char str2[10] = " World";
    char str3[10];
    int len;
    strcpy(str3, str1); // copy 
    cout << "strcpy(str3, str1): " << str3 << endl;
    strcat(str1, str2); // concatenate
    cout << "strcat(str1, str2): " << str1 << endl;
    len = strlen(str1); // length
    cout << "strlen(str1): " << len << endl;
    return 0;
}
