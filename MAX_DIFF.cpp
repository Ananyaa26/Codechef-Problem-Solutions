#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int ans;
	    if(n>=s){
	        ans=s;
	    }else{
	        ans=n-(s-n);
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
