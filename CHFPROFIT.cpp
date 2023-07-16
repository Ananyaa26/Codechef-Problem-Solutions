#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int bought = x*y;
	    int sold = x*z;
	    cout<<sold-bought<<endl;
	}
	return 0;
}
