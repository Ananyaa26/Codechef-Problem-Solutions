#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    string s;
	    cin>>s;
	    
	    string ans;
	    for(int i = 0; i < X;i++ ){
	        if(s[i] == 'A'){
	            ans.push_back('T');
	        }else if(s[i] == 'T'){
	            ans.push_back('A');
	        }else if(s[i] == 'G'){
	            ans.push_back('C');
	        }else if(s[i] == 'C'){
	            ans.push_back('G');
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
