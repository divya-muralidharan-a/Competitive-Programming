#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    int i,c=0;
    for(i=0;s[i]!='\0';i++)
        m[s[i]]=1;
    c=m.size();
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
