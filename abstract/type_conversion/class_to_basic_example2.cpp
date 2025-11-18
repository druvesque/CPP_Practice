#include<iostream>
using namespace std;

const float MeterToFloat = 3.280833;

class Distance {

    private:
        int feet;
        float inches;

    public:
        Distance() {
            feet = 0;
            inches = 0.0;
        }

        Distance(int ft, float in) {
            feet = ft;
            inches = in;
        }

        operator float() {
            float feet_in_fractions = inches / 12;
            feet_in_fractions += float(feet);
            return (feet_in_fractions/MeterToFloat);
        }

};

int main() {
    int feet;
    int inches;
    cout << "Enter distance in feet and inches: ";
    cout << "\nFeet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    Distance dist(feet, inches);
    float meters = dist;
    cout << "Converted distance to meters is: " << meters;
    return 0;
}
