#include<iostream>
#include<string>
#include<chrono>
using namespace std;

class Employee {

    private:
        string name;
        int id;
        string designation;
        class Dob {
            public:
                int date;
                int month;
                int year;
        } dob;

    public:
        void read_data() {
            cout << "Enter name of the employee: " << endl;
            cin >> name;
            cout << "Enter ID of the employee: " << endl;
            cin >> id;
            cout << "Enter designation of the employee: " << endl;
            cin >> designation;
            cout << "Enter DOB of the employee (format Date Month Year): " << endl;
            cin >> dob.date >> dob.month >> dob.year;
        }

        void calculate_age() {
            //auto now = system_clock::now();
            //year_month_day ymd{floor<days>(now)};

            int year = 2025;

            cout << "The age of the employee is: " << year - dob.year << endl;
            
        }

        void print_data() {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Designation: " << designation << endl;
            cout << "DOB: " << dob.date << "/" << dob.month << "/" << dob.year << endl;
        }
};

int main() {
    Employee e1;
    e1.read_data();
    e1.calculate_age();
    e1.print_data();
    return 0;
}
