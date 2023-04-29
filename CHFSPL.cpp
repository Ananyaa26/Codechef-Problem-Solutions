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
	    for(int i=0;i<3;i++){
	        cin>>num[i];
	    }
	    int sum=0;
	    sort(num.begin(),num.end());
	    sum = num[1]+num[2];
	    cout<<sum<<endl;
	    
	}
	return 0;
}
