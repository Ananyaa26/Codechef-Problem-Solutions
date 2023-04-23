#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    
	    int candies_needed = N-X;
	    if (candies_needed<=0){
	        cout<<0<<endl;
	    }else if(candies_needed>0){
    	    if(candies_needed%4 == 0){
    	        cout<<candies_needed/4<<endl;
    	    }else{
    	        cout<<(candies_needed/4) +1<<endl;
    	    }
	    }
	}
	return 0;
}
