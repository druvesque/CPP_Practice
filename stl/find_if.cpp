#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool odd(int i) {
    return (i%2);
}

int main() {
    vector<int> v = {20, 23, 16, 67, 35, 29, 18, 6, 41};
    vector<int>::iterator p;
    p = find_if(v.begin(), v.end(), odd);
    cout << endl << *p << endl;
    return 0;
}
