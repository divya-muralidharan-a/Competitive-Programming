#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int min=a[1]-a[0];
	    for(int j=2;j<n;j++)
	    {
	            if(fabs(a[j]-a[j-1])<min)
	            min=fabs(a[j]-a[j-1]);
	    }
	    cout<<min<<endl;
	}
	return 0;
}
 
