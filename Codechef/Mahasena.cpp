#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,s,c1=0,c2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>s;
	    if(s%2==0)
	    c1=c1+1;
	    else
	    c2=c2+1;
	}
	if(c1>c2)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;
	return 0;
}
