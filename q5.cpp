#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i=0, bit, ans=0;
    cout<<"Enter the No.: "<<endl;
    cin>>n;
    while(n!=0){
        bit = n%2;
        ans = bit*pow(10,i) + ans;
        n = n/2;
        i++;
    }
    cout<<ans<<endl;
}