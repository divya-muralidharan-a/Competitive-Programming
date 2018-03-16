#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0,m=0,i;
    cin>>n;
	string s;
	while(getline(cin,s,' '))
	{
	    for(i=0;i<s.length();i++)
	    {
	        if(isupper(s[i]))
	        c++;
	    }
	    if(c>m)
	    m=c;
	    c=0;
	}
	cout<<m<<endl;
	return 0;
}
