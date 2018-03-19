#include <iostream>
using namespace std;
 
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a*c==b*d||a*b==c*d||a*d==c*b)
	cout<<"Possible";
	else
	cout<<"Impossible";
	return 0;
}
