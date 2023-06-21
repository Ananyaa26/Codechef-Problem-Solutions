#include <iostream>
#include <vector>
#define ll long long
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll int n,m,h;
	    cin>>n>>m>>h;
	    
	    vector<ll int>A(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    
	    vector<ll int>B(m);
	    for(int j=0;j<m;j++)
	    {
	        cin>>B[j];
	    }
	    
	    sort(A.begin(),A.end());
	    sort(B.begin(),B.end());
	    
	    ll int ans = 0;
	    ll int p = n-1;
	    ll int q = m-1;
	    while(p >=0 && q>=0)
	    {
	        ll int cap = A[p];
	        ll int ocap = B[q];
	        ans += min(cap,h*ocap);
	        p--;
	        q--;
	    }
	    
	    p=0;
	    q=0;
	    ll int val = 0;
	    while(p<n && q<m)
	    {
	        ll int cap = A[p];
	        ll int ocap = B[q];
	        val += min(cap,h*ocap);
	        p++;
	        q++;
	    }
	    
	    cout<<max(ans,val)<<endl;
	    
	}
	return 0;
}
