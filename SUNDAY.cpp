#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int count=8;
	    for(int j=0;j<n;j++)
	    {
	       if(arr[j]%7!=0 && arr[j]%7!=6){
	           count++;
	       }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
