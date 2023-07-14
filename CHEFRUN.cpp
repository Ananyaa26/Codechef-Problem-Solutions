#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c,v,w;
	    cin>>a>>b>>c>>v>>w;
	    float d1=abs(c-a);
	    float d2=abs(c-b);
	    float t1=d1/v;
	    float t2=d2/w;
	    if(t1>t2){
	        cout<<"Kefa"<<endl;
	    }else if(t1==t2){
	        cout<<"Draw"<<endl;
	    }else if(t1<t2){
	        cout<<"Chef"<<endl;
	    }
	}
	return 0;
}
