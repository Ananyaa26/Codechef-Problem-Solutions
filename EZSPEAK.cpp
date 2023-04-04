#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int c=0,shift=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
	            c=0;
	            continue;
	        }
	        else{
	            c++;
	            if(c>=4){
	               shift=1;
	                break;
	            }
	        }
	    }
	    if(!shift){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
