#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int l=0;int m=0;
	    l=((x1*x1)+(y1*y1));
	    m=((x2*x2)+(y2*y2));
	    if((l==m)){
	        cout<<"EQUAL"<<endl;
	    }
	    else if(l<m){
	        cout<<"BOB"<<endl;
	    }
	    else{
	        cout<<"ALEX"<<endl;
	    }
	}
	return 0;
}
