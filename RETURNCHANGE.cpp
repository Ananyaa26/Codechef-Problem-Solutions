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
	    
	    int a=n%10;
	    if(a<5){
	        n=n/10;
	        cout<<100-(n*10)<<endl;
	    }else{
	        n=n/10;
	        n=n+1;
	        cout<<100-(n*10)<<endl;
	    }
	    
	}
	return 0;
}
