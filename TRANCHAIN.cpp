#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string b;
	    
	    int alpha=0,beta=0,gamma=0,delta=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>b;
	        if(b=="A"){
	            alpha++;
	        }else if(b=="B"){
	            beta++;
	        }else if(b=="AB")
	        {
	            gamma++;
	        }else{
	            delta++;
	        }
	    }
	    
	    int maxchainlen = 0;
	    maxchainlen+=max(alpha,beta);
	    maxchainlen+=gamma;
	    maxchainlen+=delta;
	    cout<<maxchainlen<<endl;
	}
	return 0;
}
