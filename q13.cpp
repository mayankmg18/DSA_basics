#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

void printarray(int arr[], int size){
    cout << "printing started ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "printing finished" << endl;
}

int max_val(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min_val(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}


int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr[100];
    cout << "Enter the array values: " << endl;
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    printarray(arr, size);
    cout<< "The max value of the array is " << max_val(arr, size) << endl;
    cout<< "The min value of the array is " << min_val(arr, size) << endl;
    
    return 0;
}