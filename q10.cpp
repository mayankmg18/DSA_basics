#include<iostream>
#include<math.h>
using namespace std;

int facto(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    int num, den, ans;
    num = facto(n);
    den = facto(r) * facto(n-r);
    ans = num/den;
    return ans;
}

int main(){
    int n, r, ans;
    cout << "Enter the values of n and r: ";
    cin >> n;
    cin >> r;
    cout << endl;
    cout << "The value of nCr is " << nCr(n, r) << endl;
    return 0; 
}