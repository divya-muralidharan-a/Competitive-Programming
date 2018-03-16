#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string s;
	int flag=0,i;
	cin>>s;
	int size=s.length();
	for(i=0;i<size/2;i++)
	{
	    if(s[i]!=s[size-i-1])
	    flag++;
	}
	if(flag==1)
	cout<<"YES"<<endl;
	else if(flag==0 && (size%2)!=0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
