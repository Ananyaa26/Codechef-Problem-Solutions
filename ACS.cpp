#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count =0;
	    if(n%100==0){
	        count = n/100;
	    }else{
	        count = n/100;
	        int r =n%100;
	        count = count+r;
	    }
	    if(count<=10){
	        cout<<count<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
