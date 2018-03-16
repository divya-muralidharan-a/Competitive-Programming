#include <iostream>
using namespace std;

int main() {
	int n,m,flag=0,i;
	cin>>n>>m;
	int a[m];
	for(i=0;i<m;i++)
	a[i]=0;
	while(n--)
	{
	    int b;
	    cin>>b;
	    while(b--)
	    {
	        int c;
	        cin>>c;
	        a[c-1]++;
	    }
	}
	for(i=0;i<m;i++)
	{
	    if(a[i]==0)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}
