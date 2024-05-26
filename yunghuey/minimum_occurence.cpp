include<bits/stdc++.h>
using namespace std;
 
map ma;
 
int main()
{
    string s;int m=INT_MAX;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        ma[s[i]]++;
        m=min(m,ma[s[i]]);
    }
    for(int i=0;i< s.length();i++)
    if(ma[s[i]]==m) {cout<< s[i];break;}
}
