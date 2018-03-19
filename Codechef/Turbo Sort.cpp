#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	long long int a[1000000];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+t);
	for(int l=0;l<t;l++)
	{
	    cout<<a[l]<<endl;
	}
	return 0;
}
