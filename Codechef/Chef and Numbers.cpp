#include <iostream>
int sum(int x)
{
    int y=0;
    while(x>0)
    {
        y=y+(x%10);
        x=x/10;
    }
    return y;
}
using namespace std;
 
int main(){
    long long int n,t=0,k=0,sum1=0;
    int count=0;
    cin>>n;
    for(long int i=n-97;i<n;i++)
    {
     t=sum(i);
     k=sum(t);
     sum1=i+t+k;
     if(sum1==n)
     count++;
    }
    cout<<count;
	return 0;
}
