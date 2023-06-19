#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,X,P;
	    cin>>N>>X>>P;
	    int marks_obtained = X*3 + (N-X)*(-1);
	    if(marks_obtained>=P){
	        cout<<"Pass"<<endl;
	    }else{
	        cout<<"Fail"<<endl;
	    }
	    
	}
	return 0;
}
