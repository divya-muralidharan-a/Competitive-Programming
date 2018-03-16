#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 int c;
 cin>>c;
 if(s.length()<c)
    cout<<"impossible"<<endl;
 else
 {
     int count=0;
     int a[26]={0},i;
     for(i=0;i<s.length();i++)
     {
       int x=s[i];
       a[x-97]++;
     }
     for(i=0;i<26;i++)
     {
        if(a[i]>0)
        count++;
     }
     if(c<=count)
      cout<<"0"<<endl;
     else
     {
         int k=1;
         while(k+count!=c)
            k++;
         cout<<k;
     }
 }
}
