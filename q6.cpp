#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    int i = 0;
    cout << "enter the no.: " << endl;
    cin >> n;
    
    while(n != 0){

        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }

    cout << "ans is " << ans << endl;
    return 0;
}