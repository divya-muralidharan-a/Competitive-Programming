#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	int d,n,p;
	while(t--)
	{
	    cin>>n;
	    d=n;
	    while(n>0)
	    {
	        int r=n%10;
	        p=p*10+r;
	        n=n/10;
	    }
	    if(d==p)
	    cout<<"wins"<<endl;
	    else
	    cout<<"losses"<<endl;
	    p=0;
	}
	return 0;
}
