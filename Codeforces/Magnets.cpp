#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y,x1=1;
    cin>>x;
    t--;
    while(t--)
    {
        cin>>y;
        if(y!=x)
            x1++;
        x=y;
    }
    cout<<x1<<endl;
}
