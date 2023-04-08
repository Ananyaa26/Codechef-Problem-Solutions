#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    int i=0;
	    while(x>y){
	        y=y+i;
	        i++;
	    }
	    cout<<i-1<<endl;
	}
	return 0;
}
