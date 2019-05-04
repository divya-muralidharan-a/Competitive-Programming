#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c1=0,c2=0,i;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
        if(isupper(s[i]))
            c1++;
        else
            c2++;
    if(c1<c2 || c1==c2)
        for(i=0;s[i]!='\0';i++)
        s[i]=tolower(s[i]);
    else
        for(i=0;s[i]!='\0';i++)
        s[i]=toupper(s[i]);
    cout<<s<<endl;
    return 0;
}
