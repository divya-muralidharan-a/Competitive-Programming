#include <iostream>
using namespace std;

int main() {
	int n,i,flag=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	a[i]=0;
	int p,q;
	cin>>p;
	while(p--)
	{
	    int c;
	    cin>>c;
	    a[c-1]++;
	}
	cin>>q;
	while(q--)
	{
	    int d;
	    cin>>d;
	    a[d-1]++;
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==0)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	cout<<"Oh, my keyboard!"<<endl;
	else
	cout<<"I become the guy."<<endl;
	return 0;
}
