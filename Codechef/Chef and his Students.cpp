#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n,size,count=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>s;
	    size=s.length();
	    count=0;
	    for(int j=0;j<size;j++)
	    {
	        if(s[j]=='>')
	        s[j]='<';
	        else if(s[j]=='<')
	        s[j]='>';
	        
	    }
	    for( int k=0;k<size;k++)
	    {
	        if(s[k]=='>'&&s[k+1]=='<')
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
