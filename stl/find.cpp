#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void f(vector <int> &v, int x) {
    vector<int>::iterator p = find(v.begin(), v.end(), x);
    if (p != v.end())
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
}

int main() {
    vector<int>v2 = {20, 23, 16, 67, 35, 29, 18, 6, 41};
    f(v2, 5);
    return 0;
}
