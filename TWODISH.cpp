#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    int dish2=c;
	    b=b-c;
	    int dish1 = min(a,b);
	    
	    int ans = dish1 + dish2;
	    if(ans>=n){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;;
	    }
	}
	return 0;
}
