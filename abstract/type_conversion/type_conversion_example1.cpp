#include<iostream>
using namespace std;

class Time {

    private:
        int hrs;
        int mins;

    public:
        Time(int t) {
            hrs = t/60;
            mins = t%60;
        }

        Time() {
            hrs = 0;
            mins = 0;
        }

        void display() {
            cout << "Minutes: " << mins << ", Hours: " << hrs;
        }

};

int main() {
    Time t1;
    int duration = 85;
    t1 = duration;
    t1.display();
    return 0;
}
