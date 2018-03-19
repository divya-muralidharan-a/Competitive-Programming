#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int c1=0,c2=0,a[100000];
	    long int n;
	    cin>>n;
	    for(long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==2)
	        c2++;
	        else if(a[i]>2)
	        c1++;
	    }
	    cout<<(c1*c2)+(c1*(c1-1)/2)<<endl;
	    c1=0;
	    c2=0;
	}
	return 0;
}
 
