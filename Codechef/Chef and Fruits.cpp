#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k,d=0;
	    cin>>n>>m>>k;
	    d=fabs(n-m);
	    if(d>k)
	    d=d-k;
	    else
	    d=0;
	    cout<<d<<endl;
	}
	return 0;
}
 
