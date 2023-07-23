#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum1=a+c;
	    cout<<((sum1+b)+abs(sum1-b))/2<<endl;
	}
	return 0;
}
