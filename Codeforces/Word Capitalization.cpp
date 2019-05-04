#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i;
    cin>>s;
    s[0]=toupper(s[0]);
    for(i=0;s[i]!='\0';i++)
        cout<<s[i];
    cout<<endl;
    return 0;
}
