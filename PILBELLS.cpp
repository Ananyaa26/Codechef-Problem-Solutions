#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,x,k,p;
	   cin>>n>>x>>k>>p;
	   int ans=p;
	   int i=0;
	   while(i<k && i<x){
	      ans=ans+10;
	      i++;
	   }
	   while(i<k){
	           ans=ans+5;
	           i++;
	   }
	   if(n==(i)){
	           ans=ans+20;
	   }
	   cout<<ans<<endl;
	
	}
	return 0;
}
