#include <iostream>
using namespace std;
#include <vector>
int main() {
	// your code goes here
	vector<int>num(4);
	for(int i = 0 ; i < num.size();i++){
	    cin>>num[i];
	}
	int ans = 0;
	for(int j = 0 ; j < num.size();j++){
	    if(num[j]>=10){
	        ans++;
	    }
	}
	cout<<ans;
	return 0;
}
