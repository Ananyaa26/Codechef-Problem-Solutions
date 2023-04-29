#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    int val = (u*u)-(2*a*s);
	    if(val<=v*v){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
