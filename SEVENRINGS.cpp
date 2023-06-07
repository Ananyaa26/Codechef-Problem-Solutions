#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int ans = n*x;
	    int count = 0;
	    while(ans>0){
	        ans=ans/10;
	        count++;
	        
	    }
	    if(count == 5){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
