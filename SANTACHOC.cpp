#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
    	int N,K;
    	cin>>N>>K;
    	int total = 0;
    	vector<int>nums(N);
    	for(int i=0;i<N;i++){
    	    cin>>nums[i];
    	    total+=nums[i];
    	}
    	
    	if(total<N){
    	    cout<<"NO"<<endl;
    	}else{
    	    int val = total%N;
    	    if(K==0 && val!=0){
    	        cout<<"NO"<<endl;
    	    }else{
    	        cout<<"YES"<<endl;
    	    }
    	}
	
	}
	return 0;
}
