#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c = 21-a-b;
	    if(c>0 && c<11){
	        cout<<c<<endl;
	    }else if(c<=0 || c>10){
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
