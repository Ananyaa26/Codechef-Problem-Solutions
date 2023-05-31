#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void longestplaylist(){
    int n,k,l,a,b;
    cin>>n>>k>>l;
    vector<pair<int,int>>vec;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vec.push_back({a,b});
        if(b==l){
            mp[l]++;
        }
    }
    if(mp[l]<k){
        cout<<-1<<endl;
    }else{
        sort(vec.begin(),vec.end());
        int a = n-1;
        long long int s=0;
        while(1){
            if(k==0) break;
            if(vec[a].second == l)
            {
                k--;
                s+=vec[a].first;
            }
            a--;
        }
        cout<<s<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    longestplaylist();
	}
	return 0;
}
