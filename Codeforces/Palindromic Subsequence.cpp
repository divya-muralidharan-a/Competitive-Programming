#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,k;
    cin>>s;
    int i=0,flag=0,j;
    for(i=0;i<s.length()/2;i++)
        if(s[i]!=s[s.length()-1-i])
        flag++;
    if(flag==0)
        cout<<s<<endl;
    else
    {
        cout<<s;
        for(i=s.length()-1;i>=0;i--)
        cout<<s[i];
        cout<<endl;
    }
    return 0;
}
