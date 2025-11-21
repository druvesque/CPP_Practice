#include<iostream>
#include<algorithm>
using namespace std;

void show(int a[], int array_size) {
    for (int i = 0; i < array_size; ++i) 
        cout << a[i] << " ";
}

int main() {
    int a[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int array_size = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is: ";
    show(a,array_size);
    cout << "\nLet's say we want to search for 2 in the array: ";
    cout << "\nSo, we first sort the array";
    sort(a, a + array_size);
    cout << "\n\nThe array after sorting is: ";
    show(a, array_size);
    cout << "\n\nNow, we do the binary search";
    if(binary_search(a, a + array_size, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    cout << "\nNow, say we want to search for 10";
    if (binary_search(a, a + array_size, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}


