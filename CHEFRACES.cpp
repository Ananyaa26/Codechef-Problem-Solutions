#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int count=0;
        if(a==x || a==y)
        {
        	count++; 
        }
        if(b==x || b==y)
        {
        	count++;
		}
        cout<<" "<<2-count<<endl;
	}
	return 0;
}
