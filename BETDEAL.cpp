#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    int sp_a = 100-a;
	    int sp_b = 200-(b*2);
	    if(sp_b>sp_a){
	        cout<<"First"<<endl;
	    }else if(sp_b<sp_a){
	        cout<<"SECOND"<<endl;
	    }else if(sp_a==sp_b){
	        cout<<"BOTH"<<endl;
	    }
	}
	return 0;
}
