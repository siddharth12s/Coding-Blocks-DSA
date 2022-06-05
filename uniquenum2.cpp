#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    vector<int> a;
while(t--)
{
    int n;
    cin>>n;
    a.push_back(n);    
}
    sort(a.begin(),a.end());
    int ans=a[0];
    vector<int> v;
    for(auto i=1;i<a.size();i++){
           if(ans^a[i]!=0)
              v.push_back(a[i]);
            
        ans=a[i];
    }

    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
