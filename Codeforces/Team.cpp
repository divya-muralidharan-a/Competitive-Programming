#include <iostream>
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	while(n--)
	{
	    int s=0,a[3],i;
	    for(i=0;i<3;i++)
	    {
	        cin>>a[i];
	        if(a[i]==1)
	        s++;
	    }
	    if(s>=2)
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
