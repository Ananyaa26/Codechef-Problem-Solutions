#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int time1 = 0;
	    int time2 = 0;
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            time1++;
	        }
	        else
	        {
	            time2++;
	        }
	    }
	     cout<<time1*a+time2*b<<endl;
	}
	return 0;
}
