#include<bits/stdc++.h>
using namespace std;

int gcd(int,int);
int main()
{
    int n;
    cin>>n;
    int i,j,max1=0,max2=0;
    for(i=1;i<n;i++)
    {
        j=n-i;
        if(i<j)
        {
            if(gcd(i,j)==1)
            {
                max1=i;
                max2=j;
            }
        }
    }
    cout<<max1<<" "<<max2<<endl;
}
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
