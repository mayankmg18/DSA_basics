#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void printarr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl << "printing done" << endl;
}

swap_alt(int arr[], int size) {
    for(int i=0; (i+1)<size;) {
        swap(arr[i], arr[i+1]);
        i = i+2;
    }
}

int main() {

    int num[5] = {2,4,33,1,2};
    int var[6] = {3,44,23,33,54,4};

    swap_alt(num, 5);
    swap_alt(var, 6);

    printarr(num, 5); 
    printarr(var, 6);

    return 0; 
}