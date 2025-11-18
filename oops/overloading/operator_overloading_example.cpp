#include<iostream>
using namespace std;

class Matrix {

    private:
        int matrix[3][2];

    public:
        friend istream& operator >>(istream&, Matrix&);
        friend ostream& operator <<(ostream&, Matrix&);
};

istream& operator >>(istream& in, Matrix &m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            in>>m.matrix[i][j];
        }
    }
    return in;
}

ostream& operator <<(ostream& out, Matrix&m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            out<<m.matrix[i][j]<<"\t";
        }
        out<<endl;
    }
}

int main() {
    Matrix obj;
    cin>>obj;
    cout<<obj;
    return 0;
}
