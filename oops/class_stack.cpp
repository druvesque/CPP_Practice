#include<iostream>
#include<conio.h>
#include<process.h>
#define SIZE 10
using namespace std;
static int top = -1;

class stack {
    private:
        int arr[SIZE];

    public:
        void push(int item);
        void pop();
        void peep();
};

void stack::push(int item) {
    if (top == SIZE - 1)
        cout << "\n Stack Overflow! Can't add more.";
    else {
        arr[++top] = item;
        cout << "Element successfully pushed into the Stack!";
    }
}

void stack::pop() {
    if (top < 0)
        cout << "\n Stack Under Flow! Can't pop no more.";
    else {
        cout << "Popped element: " << arr[top--] << endl;
        cout << "Element successfully popped from the stack";
    }
}

void stack::peep() {
    if (top < 0)
        cout << "\n The Stack if Empty it cannot be peeped!";
    else 
        cout << "Top: " << top << " Element: " << arr[top]; 
}

int main() {
    char choice;
    int ch, num;
    stack ob;

    do {
        system("cls");
        cout << "\n\n\t\t\tSTACK OPERATIONS";
        cout << "\n\t\t\t----------------";
        cout << "\n\n1. PUSH";
        cout << "\n2. POP";
        cout << "\n3. PEEP";
        cout << "\n4. EXIT";
        cout << "\n\nEnter your choice: ";
        cin >> ch;
        switch(ch) {
            case 1:
                cout << "\nEnter the element you want to push: ";
                cin >> num;
                ob.push(num);
                break;
            case 2:
                ob.pop();
                break;
            case 3:
                ob.peep();
                break;
            case 4:
                exit(0);
            default:
                cout << "\nPlease enter a Valid Choice (1 - 4)!";
        }
        cout << "\n Do you want to continue (y/n)?: ";
        cin >> choice;
    } while ((choice == 'y') || (choice == 'Y'));
    return 0;
}
