#include<iostream>
using namespace std;

class Alpha {

    private:
        int x;

    public:
        Alpha(int i) {
            x = i;
            cout << "Alpha initialized" << endl;
        }
        void show_x() {
            cout << "Value of Alpha initialized: " << x << endl;
        }

};

class Beta {

    private: 
        float y;

    public:
        Beta(float j) {
            y = j;
            cout << "Beta Initialized" << endl;
        }
        void show_y() {
            cout << "Value of Beta Initialized: " << y << endl;
        }
};

class Gamma:public Beta, public Alpha {

    private:
        int m, n;

    public:
        Gamma(int a, float b, int c, int d):Alpha(a), Beta(b) {
            m = c;
            n = d;
            cout << "Gamma Initialized." << endl;
        }
        void show_mn() {
            cout << "Value of Gamma Initialized: " << m << ", " << n << endl;
        }
};

int main() {
    Gamma g(5,10.75,8,7);
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}
