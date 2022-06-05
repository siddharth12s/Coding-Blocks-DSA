#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int l,r;
    cin>>l>>r;

    int n= l^r;
    int p=0;
    while(n){
        n>>=1;
        p++;
    }
    cout<<pow(2,p)-1;


    return 0;
}
