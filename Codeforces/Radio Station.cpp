#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    string name,ip;
    map <string,string> ma;
    for(i=0;i<n;i++)
    {
        cin>>name>>ip;
        ip+=";";
        ma[ip]=name;
    }
    for(i=0;i<m;i++)
    {
        cin>>name>>ip;
        cout<<name<<" "<<ip<<" #"<<ma[ip]<<endl;
    }
    return 0;
}
