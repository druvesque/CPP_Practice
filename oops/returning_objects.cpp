#include<iostream>
using namespace std;

class Distance {
    
    private:
        int feet;
        float inches;

    public:
        Distance(): feet(0), inches(0.0) {}
        Distance(int ft, float in): feet(ft), inches(in) {}
        void getdist();
        void showdist();
        Distance add_dist(Distance);

};

void Distance::getdist() {
    cout << "\nEnter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}

void Distance::showdist() {
    cout << "\nFeet: " << feet << ", Inches: " << inches << endl;
}

Distance Distance::add_dist(Distance obj) {
    Distance temp;
    temp.inches = inches + obj.inches;
    if(temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + obj.feet;
    return temp;
}

int main() {
    Distance d1, d3;
    Distance d2(11, 6.25);
    d1.getdist();
    d3 = d1.add_dist(d2);
    cout << "\nd1: ";
    d1.showdist();
    cout << "\nd2: ";
    d2.showdist();
    cout << "\nd3: ";
    d3.showdist();
    return 0;
}
