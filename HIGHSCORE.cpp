#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int>a(4);
	    for(int i = 0 ; i < a.size();i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    cout<<a[3]<<endl;
	}
	return 0;
}
