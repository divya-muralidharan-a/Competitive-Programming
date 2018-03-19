#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(s.find('I')!=string::npos)
	    cout<<"INDIAN"<<endl;
	    else if(s.find('Y')!=string::npos)
	    cout<<"NOT INDIAN"<<endl;
	    else
	    cout<<"NOT SURE"<<endl;
	}
	
	return 0;
} 
