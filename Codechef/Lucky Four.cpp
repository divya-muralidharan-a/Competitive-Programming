#include <iostream>
using namespace std;
 
int main() {
	long long int t,n,f;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    f=0;
	    while(n>0)
	    {
	      int rem=0;
	      rem=n%10;
	      if(rem==4)
	      f++;
	      n=n/10;
	    }
	    cout<<f<<endl;
	}
	
	
	return 0;
}
