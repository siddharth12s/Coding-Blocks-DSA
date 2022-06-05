#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int ans=0;
    while(n){
        if(n&1)
          ans++;
      n>>=1;
    }
    cout<<ans<<endl;
}

    return 0;
}
