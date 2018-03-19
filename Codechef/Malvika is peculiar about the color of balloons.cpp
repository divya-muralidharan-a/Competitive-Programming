#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    string s;
    int t,ca=0,cb=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            ca++;
            else
            cb++;
        }
        if(ca>cb)
        cout<<cb<<endl;
        else
        cout<<ca<<endl;
        ca=0;
        cb=0;
    }
 
	return 0;
}
 
