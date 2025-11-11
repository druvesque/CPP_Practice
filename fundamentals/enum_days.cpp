#include<iostream>
using namespace std;

enum daysofweek {SUN, MON, TUE, WED, THU, FRI, SAT};

daysofweek nextday(daysofweek d) {
    return static_cast<daysofweek>((d+1)%7);
}

int main() {
    daysofweek day;
    day = static_cast<daysofweek>(3);
    cout << "day = " << day << endl;
    day = nextday(day);
    cout << "day = " << day << endl;

    for (day = MON; day < SAT; day = static_cast<daysofweek>(day+1)) {
        cout << "day = " << day << endl;
    }
    return 0;
}
