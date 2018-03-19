#include <iostream>
using namespace std;
 
int main() {
	int t,n;
	string s;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>s;
	    int a[3]={0,0,0};
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='R')
	        a[0]+=1;
	        else if(s[j]=='G')
	        a[1]+=1;
	        else
	        a[2]+=1;
	    }
	    int max=0;
	    for(int k=0;k<3;k++)
	    {
	        if(a[k]>max)
	        max=a[k];
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
