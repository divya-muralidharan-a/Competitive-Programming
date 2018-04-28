    #include <iostream>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    	    long long int n,m;
    	    cin>>n>>m;
    	    long long int cuts=(n*m)-1;
    	    if(cuts%2==0)
    	    cout<<"No"<<endl;
    	    else
    	    cout<<"Yes"<<endl;
    	}
    	return 0;
    }
     
