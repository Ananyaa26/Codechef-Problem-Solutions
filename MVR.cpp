#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int ans1 = a*2 + b*1;
	int ans2 = x*2 + y*1;
	if(ans1>ans2){
	    cout<<"Messi";
	}else if(ans1<ans2){
	    cout<<"Ronaldo";
	}else{
	    cout<<"Equal";
	}
	return 0;
}