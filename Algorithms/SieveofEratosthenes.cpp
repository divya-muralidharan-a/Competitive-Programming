#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int m,n,i,j;
	    cin>>m>>n;
	    bool prime[n+1];
	    prime[1]=false;
	    for(i=2;i<=n;i++)
	    prime[i]=true;
	    for(i=2;i*i<=n;i++)
	    {
		  if(prime[i]==true)
		  {
			 for(j=i*2;j<=n;j+=i)
			 {
				prime[j]=false;
			 }
		 }
	    }
	    for(i=m;i<=n;i++)
        if(prime[i]==true)
        cout<<i<<endl;
        cout<<endl;
    }
    return 0;
}
