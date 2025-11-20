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

class Sports: public Student {

    protected:
        float score;

    public:
        void put_score(float b) {
            score = b;
        }
        void get_score() {
            cout << "The Score is: " << score << endl;
        }
};

class Result: public Test, public Sports {
    
    protected:
        float total;

    public:
        void display_result() {
            total = m1 + m2 + score;
            Test::get_data();
            get_test();
            get_score();
            cout << "Total: " << total << endl;
        }
        
};

int main() {
    Result r1;
    r1.Test::put_data(24);
    r1.put_test(89.5, 97.0);
    r1.put_score(5.0);
    cout << "RESULT\n";
    r1.display_result();
    return 0;
}
