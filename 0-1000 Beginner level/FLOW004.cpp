//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,last,first;
		cin>>n;
		last=n%10;
		while(n>=10)
		{
			n=n/10;
		}
		first=n;
		cout<<last+first<<"\n";
		
	}
	return 0;
}