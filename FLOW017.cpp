#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int>num(3);
	    for(int i = 0 ; i < 3;i++){
	        cin>>num[i];
	    }
	    sort(num.begin(),num.end());
	    cout<<num[1]<<endl;
	    
	}
	return 0;
}
