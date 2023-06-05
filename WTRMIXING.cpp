#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   int a,b,x,y;
	   cin>>a>>b>>x>>y;
	   if(a>b && a-b<=y){
	       cout<<"YES"<<endl;
	   }else if(a<b && b-a<=x){
	       cout<<"YES"<<endl;
	   }else if(a==b){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	   
	}
	return 0;
}
