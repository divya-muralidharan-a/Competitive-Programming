#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int a[x],i;
    for(i=0;i<x;i++)
        cin>>a[i];
    int j=0,k=x-1,s=0,d=0;
    i=0;
    while(x--)
    {
     if(i%2==0)
     {
         if(a[j]>a[k])
         {
             s+=a[j];
             j++;
         }
         else
         {
             s+=a[k];
             k--;
         }
     }
     else
     {
         if(a[j]>a[k])
         {
             d+=a[j];
             j++;
         }
         else
         {
             d+=a[k];
             k--;
         }
     }
     i++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
