#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--)
	{
	    int A,B,C,T,a,b,c;
	    cin>>A>>B>>C>>T>>a>>b>>c;
	    if(a>=A && b>=B && c>=C && (a+b+c)>=T){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
