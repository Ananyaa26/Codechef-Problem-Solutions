#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    string s = to_string(X);
	    int count = 0;
	    for(int i= 0 ; i <s.size();i++){
	        if(s[i] == '7'){
	            count++;
	        }
	    }
	    if(count>0){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
