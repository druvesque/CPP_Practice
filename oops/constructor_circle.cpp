#define PI 22/7
#include<iostream>
using namespace std;

class circle {

    private:
        float local_radius;

    public:
        circle(float radius);
        void area();
};

circle::circle(float radius) {
    local_radius = radius;
}

inline void circle::area() {
    cout << "Area: " << PI * ((local_radius) * (local_radius)) << endl; 
}

int main() {
    float radius;
    cin >> radius;
    circle circ_obj(radius);
    circ_obj.area();
    return 0;
}
