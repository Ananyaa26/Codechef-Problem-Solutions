#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	while(N--){
	    int a , b , c ;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	        cout<<"ALice"<<endl;
	    }
	    else if(b>a && b>c)
	    {
	            cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Charlie"<<endl;
	    }
	}
	
	return 0;
	return 0;
}
