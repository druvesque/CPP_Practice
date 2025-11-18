#include<iostream>
#include<string>
using namespace std;

class Marks {

    public:
        int marks[3];

};

class Student {

    private: 
        string name;
        int id;
        int sem;
        Marks obj1;

    public:
        void read_data();
        void avg_best2();
        void print_data();

};

void Student::read_data() {
    cout << "Enter the name of the student: " << endl;
    cin >> name;
    cout << "Enter the Id of the student: " << endl;
    cin >> id;
    cout << "Enter the semester of the student: " << endl;
    cin >> sem;
    cout << "Enter the 3 Marks: " << endl;
    cin >> obj1.marks[0] >> obj1.marks[1] >> obj1.marks[2];
}

void Student::avg_best2() {
    float max1, max2;
    float avg;

    if (obj1.marks[0] <= obj1.marks[1] && obj1.marks[0] <= obj1.marks[2]) {
        max1 = obj1.marks[1];
        max2 = obj1.marks[2];
    }
    else if (obj1.marks[1] <= obj1.marks[0] && obj1.marks[1] <=obj1.marks[2]) {
        max1 = obj1.marks[0];
        max2 = obj1.marks[2];
    }
    else {
        max1 = obj1.marks[0];
        max2 = obj1.marks[1];
    }

    avg = (max1 + max2) / 2;
    cout << "The average of the best 2 marks is: " << avg << endl;
}

void Student::print_data() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Semester: " << sem << endl;
    cout << "Marks: " << obj1.marks[0] << ", " << obj1.marks[1] << ", " << obj1.marks[2] << endl;
}

int main() {
    Student s1;
    s1.read_data();
    s1.avg_best2();
    s1.print_data();
    return 0;
}
