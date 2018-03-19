#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	string s;
	int found;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	   cin>>s;
	   for(int k=0;k<s.length();k++)
	   {
	       found=s.find("101");
	       if(found!=-1)
	       {cout<<"Good"<<endl;
	       break;}
	       else
	       {
	           found=s.find("010");
	           if(found!=-1)
	           {cout<<"Good"<<endl;
	            break;}
	           else
	           {cout<<"Bad"<<endl;
	            break;}
	       }
	       
	   }
	   
	}
	return 0;
}
 
