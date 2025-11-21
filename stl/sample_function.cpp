#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <class T>
class less_than {

    private:
        T val;

    public:
        less_than(T x): val(x) {}
            bool operator() (const T& x) { 
                return x<val;
        }
};

int main() {
    vector<int>v = {20, 23, 16, 67, 35, 29, 18, 6, 41};
    vector<int> :: iterator p;
    p = find_if(v.begin(), v.end(), less_than<int>(20));
    cout << endl << *p << endl;
    return 0;
}
