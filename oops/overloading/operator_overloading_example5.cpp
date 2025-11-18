#include<iostream>
using namespace std;

class Cents {

    private:
        int m_nCents;

    public:
        Cents(int nCents) {
            m_nCents = nCents;
        }

        int GetCents() {
            return m_nCents;
        }

        // friend Cents operator+(Cents& cCents, int nCents);

        Cents operator+(int nCents);

};

// Cents operator+(Cents& cCents, int nCents) {
//     return Cents(cCents.m_nCents + nCents);
// }

 Cents Cents::operator+(int nCents) {
     return Cents(m_nCents + nCents);
 }


int main() {
    int nCent = 50;
    Cents c(30);
    Cents final_cent = c + nCent;
    cout << "After addition: " << final_cent.GetCents() << endl;
    return 0;
}
