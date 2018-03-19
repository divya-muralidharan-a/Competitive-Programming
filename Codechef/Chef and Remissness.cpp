#include <iostream>
using namespace std;
 
int main() {
	int t;
	long long int n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(n>m)
	    cout<<n<<" ";
	    else
	    cout<<m<<" ";
	    cout<<n+m<<endl;
	    
	}
	return 0;
}
