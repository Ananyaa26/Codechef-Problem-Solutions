#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    	int n,x;
    	cin>>n>>x;
    	int num[n];
    	
    	for(int i=0;i<n;i++)
    	{
    	    cin>>num[i];
    	}
    	int count=0;
    	for(int j=0;j<n;j++)
    	{
    	    if(num[j]>=x)
    	    {
    	        count=count+1;
    	    }
    	}
    	
    	cout<<count<<endl;
	
	}
	return 0;
}
