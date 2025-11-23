#include<iostream>
using namespace std;

enum days {
    Mon = 1,
    Tue = 2,
    Wed = 3, 
    Thu = 4,
    Fri = 5, 
    Sat = 6,
    Sun = 7
};

days next_day(days d) {
    return (days) ((d + 1) % 7);
}

int main() {    
    days d1, d2;
    d1 = Mon;
    cout << "d1: " << d1 << ", Next Day: " << next_day(d1) << endl;
    return 0;
}



