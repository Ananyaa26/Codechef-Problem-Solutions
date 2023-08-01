#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x==y){
	        cout<<x+y-1<<endl;
	    }else{
	        cout<<x+y<<endl;
	    }
	}
	return 0;
}
