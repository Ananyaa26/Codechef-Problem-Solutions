#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int ans = 0;
	    vector<int>A(N);
	    for(int i = 0 ; i < N ; i++){
	        cin>>A[i];
	    }
	    for(int j = 0;j<N;j++){
	        if(A[j]>=1000){
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
