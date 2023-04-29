#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,max=0;
	    cin>>n>>x;
	    while(n--)
	    {
	        int s,r;
	        cin>>s>>r;
	        if(s<=x && r>max){
	            max=r;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
