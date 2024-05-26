#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;cin>>n;vector<string> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    map<string,int> m;
    for(auto i:v)
    {
        if(m[i]) cout<<i<<m[i]<<endl;
        else cout<<i<<endl;
        m[i]++;
    }
}
