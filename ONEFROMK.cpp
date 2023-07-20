#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>num(n);
	    long score = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>num[i];
	        score+=num[i];
	    }
	    cout<<score<<" ";
	    sort(num.begin(),num.end());
	    for(int i=0;i<n-1;i++){
	        score=score-num[i];
	        cout<<score<< " ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
