#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int num[6];
	    for(int i=0;i<6;i++)
	    {
	        cin>>num[i];
	    }
	    if((num[0]==num[2] && num[1]==num[3]) || (num[0]==num[3] && num[1]==num[2])){
	        cout<<1<<endl;
	    }
	    else if((num[0]==num[4] && num[1]==num[5]) || (num[0]==num[5] && num[1]==num[4])){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
