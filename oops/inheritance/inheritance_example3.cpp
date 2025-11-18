#include<iostream>
using namespace std;

class B {
    
    private:
        int a;
        int b;

    public:
        void get_ab();
        int get_a();
        int get_b();
        void show_a();
        void show_b();
};

class D: private B {

    private:
        int c;

    public:
        void mul();
        void display();

};

void B::get_ab() {
    cout << "Enter the values of A and B: ";
    cin >> a >> b;
}

int B::get_a() {
    return a;
}

int B::get_b() {
    return b;
}

void B::show_a() {
    cout << "a = " << a << endl;
}

void B::show_b() {
    cout << "b = " << b << endl;
}

void D::mul() {
    get_ab();
    c = get_b() * get_a();
}

void D::display() {
    show_a();
    show_b();
    cout << "c = " << c << endl;
}

int main() {
    D d;
    d.mul();
    d.display();
}
