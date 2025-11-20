#include<iostream>
using namespace std;

class Student {

    protected: 
        int roll_no;

    public:
        void put_data(int b) {
            roll_no = b;
        }
        void get_data() {
            cout << "The Roll No is: " << roll_no << endl;
        }

};

class Test:public Student {

    protected:
        float m1, m2;

    public:
        void put_test(float b, float c) {
            m1 = b;
            m2 = c;
        }
        void get_test() {
            cout << "Marks in CP: " << m1 << endl;
            cout << "Marks in Drawing: " << m2 << endl;
        }

};

class Result:public Test {

    protected:
        float total;

    public:
        void display_result() {
            total = m1 + m2;
            get_data();
            get_test();
            cout << "Total of the two: " << total << endl;
        }
};

int main() {
    system("cls");
    int x;
    float y,z;
    Result r1;
    cout << "Enter Roll No: ";
    cin >> x;
    cout << "Enter Marks 1: ";
    cin >> y;
    cout << "Enter Marks 2: ";
    cin >> z;
    r1.put_data(x);
    r1.put_test(y, z);
    r1.display_result();
    return 0;
}
