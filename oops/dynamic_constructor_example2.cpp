#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class str{
    
    private:
        char *name;
        int len;

    public:
        str() {
            len = 0;
            name = new char[len+1];
        }

        str(char *s) {
            len = strlen(s);
            name = new char[len + 1];
            strcpy(name, s);
        }

        void show() {
            cout << "NAME IS -->  " << name << endl;
        }

        void join(str &a, str &b);
};

void str::join(str &a, str &b) {
    len = a.len + b.len;
    delete name;
    name = new char[len+1];
    strcpy(name, a.name);
    strcat(name, b.name);
}

int main() {
    system("cls");
    char *first = "HARSHIT";
    str n1(first), n2("NINA"), n3("PRATIK"), n4, n5;

    n4.join(n1, n2);
    n5.join(n4,n3);
    n1.show();
    n2.show();
    n3.show();
    n4.show();
    n5.show();
    return 0;
}
