#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>num(n);
	    for(int i=0;i<n;i++){
	        cin>>num[i];
	    }
	    sort(num.begin(),num.end());
	    int sum = 0;
	    sum = sum+num[n-1];
	    int b=sum;
	    for(int i=n-2;i>=0;i--){
	        if(b!=num[i]){
	            sum+=num[i];
	            break;
	        }
	    }
	    cout<<sum<<endl;
	    
	}
	return 0;
}
