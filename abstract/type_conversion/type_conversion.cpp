#include<iostream>
#include<cstring>
using namespace std;

class String {

    public:
        int length;
        char *P;
        String() {}
        String(char*);
        String(const String &s);
        ~String() {
            delete P;
        }
};

String:: String(char* a) {
    length = strlen(a);
    P = new char[length + 1];
    strcpy(P, a);
}

String:: String(const String &s) {
    length = s.length;
    P = new char[length + 1];
    strcpy(P, s.P);
}

int main() {
    String s1, s2;
    char arr1[] = "IBM PC";
    char arr2[] = "Apple Computers";
    String name1 = arr1;
    String name2 = arr2;
    cout << "name1 = " << name1.P << endl;
    cout << "name2 = " << name2.P << endl;
    s1 = String(name1);
    cout << "s1 = " << s1.P << endl;
    s2 = name2;
    cout << "s2 = " << s2.P << endl;
    return 0;
}
