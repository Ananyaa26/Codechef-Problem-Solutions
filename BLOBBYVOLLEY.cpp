#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int a=0;
	    int b=0;
	    int flag=0;
	    
	    if(s[0]=='A')a++;
	    else if(s[0]=='B')flag=1;
	    
	    for(int i=1;i<n;i++)
	    {
	        if(s[i]=='A'&& flag==0)
	        {
	            a++;
	            flag=0;
	        }
	        else if(s[i]=='B'&& flag==1)
	        {
	            flag=1;
	            b++;
	        }
	        else if(s[i]=='A'&& flag==1) 
	        {
	            flag=0;
	        }
	        else if(s[i]=='B'&& flag==0)
	        {
	            flag=1;
	        }
	    }
	    cout<<a<<' '<<b<<endl;
	}
	return 0;
}
