// fibinocci series
#include<iostream>
using namespace std;

int main() {
    int n;
    int a=0,b=1;
    cout<<"enter the count: ";
    cin>>n;
    cout<<a<<" "<<b;

    for(int i=1; i<=n; i++) {
        int nextnum = a+b;
        a=b;
        b=nextnum;
        cout<<" "<<nextnum;
    }
}