#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int N;
	cin>>N;
	while(N--){
	    int a , b , c ;
	    cin>>a>>b>>c;
	    int max, min;
	    if(a>b && a>c) {   max = a; }
	    else if(a<b && b>c) {   max = b;}
	    else if (c>b && a<c) {   max = c; }
	    
	    if(a<b && a<c) {   min = a; }
	    else if (a>b && b<c) {   min = b; }
	    else if(b>c && a>c) {   min  = c; }
	    
	    cout<<max-min<<endl;
	}
	
	return 0;
}
