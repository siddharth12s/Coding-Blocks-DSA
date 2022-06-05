#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    int ans=0;
    int bit[64]={0};
while(t--)
{
    int n;
    cin>>n;
    int pos=0;
    while(n){
        if(n&1)
          bit[pos]++;
      pos++;
      n>>=1;
    }
}
for(auto i=0;i<64;i++){
    bit[i]%=3;
}
int p=1;
for(auto i=0;i<64;i++){
    ans += bit[i]*p;
    p <<=1;
}
cout<<ans;
    return 0;
}
