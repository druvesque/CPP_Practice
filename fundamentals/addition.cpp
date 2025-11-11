#include <iostream> 
using namespace std;

int main() {
    int first, second, sum; 

    cout << "Peter: Hey Frank, I just learned how to add" 
         << " two numbers together "<< endl;
    cout << "Frank: Cool!" << endl;
    cout << "Peter: Give me the first number" << endl;
    cout << "Frank: ";
    cin >> first;
    cout << "Peter: Give me the second number" << endl;
    cout << "Frank: ";
    cin >> second;
    sum = first + second;
    cout << "Peter: OK, here is the answser: ";
    cout << sum << endl;
    cout << "Frank: Wow! You are amazing!" << endl;
    return 0;
}
