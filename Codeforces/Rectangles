#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],i,j,k=0,l=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        k=0,l=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
                k++;
            else
                l++;
        }
        sum=sum+(pow(2,k)-1)+(pow(2,l)-1);
    }
    for(j=0;j<m;j++)
    {
        k=0,l=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]==0)
                k++;
            else
                l++;
        }
        //cout<<k<<" "<<l<<" ";
        sum=sum+(pow(2,k)-1)+(pow(2,l)-1);
    }
    cout<<sum-(n*m)<<endl;
}
