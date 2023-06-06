#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int w,a,b,c;
	    cin>>w>>a>>b>>c;
	    if(w==a or w==b or w==c)
	    cout<<"YES"<<endl;
	    else if(((a+b) == w) or ((b+c)==w) or((c+a)==w) or (w==(a+b+c)))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl; 
	}
	return 0;
}
