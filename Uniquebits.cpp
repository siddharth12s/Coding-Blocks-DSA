#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    int ans =0;
while(t--)
{
    int n;
    cin>>n;
    ans ^= n;  
}
cout<<ans;
    return 0;
}
