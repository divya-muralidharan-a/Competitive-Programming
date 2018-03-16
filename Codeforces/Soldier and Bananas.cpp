#include <iostream>
using namespace std;

int main() {
	long long int n,k,w,t=0,i;
	cin>>k>>n>>w;
	for(i=1;i<=w;i++)
	{
	    t=t+(k*i);
	}
	if((t-n)>0)
	cout<<t-n<<endl;
	else
	cout<<"0"<<endl;
	return 0;
}
