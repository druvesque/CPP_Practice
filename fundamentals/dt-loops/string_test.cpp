#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
    const char *s1 = "Hello ";
    string s2 = "World";
    char *p;
    p = strchr(s1, 'l');
    cout << "Find: " << *p << endl;
    // cout << "Find_str: " << strstr(s1, "el") << endl;
    return 0;
}
