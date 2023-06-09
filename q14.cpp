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

void reversearr(int arr[], int size) {
    int start=0, end=(size-1);
    for(start; start <= end;) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int num[5] = {1, 3 ,9, 22, 12};
    int arr[6] = {67, 3, 22, 43, 33, 221};

    reversearr(num, 5);
    reversearr(arr, 6);
    printarr(num, 5);
    printarr(arr, 6);

    return 0;
}