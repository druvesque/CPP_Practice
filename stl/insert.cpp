#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>v = {0, 1, 2, 3, 4, 5};
    for(const auto& i:v)
        cout << i << "\t";
    cout << endl << endl;
    vector<int>::iterator p = v.begin();
    ++p;
    ++p;
    ++p;
    vector<int>::iterator q = p;
    ++q;
    p = v.insert(p, 99);
    for(const auto& i:v)
        cout << i << "\t";
    cout << endl << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;
    return 0;
}
