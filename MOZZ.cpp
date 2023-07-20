#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,r;
	    cin>>x>>y>>r;
	    int extra = r/30;
	    int ate = x+extra;
	    if(ate%y==0){
	        cout<<ate/y<<endl;
	    }else{
	        cout<<(ate/y)+1<<endl;
	    }
	}
	return 0;
}
