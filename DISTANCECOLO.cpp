#include <iostream>
using namespace std;

const int MOD = 1e9 +7;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long long ways = 1;
	    for(int i=0;i<n;i++)
	    {
	        ways = (ways*k)%MOD;
	        if(k>1){
	            k--;
	        }
	    }
	    cout<<ways<<endl;
	}
	return 0;
}
