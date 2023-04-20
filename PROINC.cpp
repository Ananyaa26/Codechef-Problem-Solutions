#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T>0){
	    int X,Y;
	    cin>>X>>Y;
	    int cost_price = X-Y;
	    int new_sp = X+0.10*X;
	    int profit = new_sp-cost_price;
	    cout<<profit<<endl;
	  
	    T--;
	}
	return 0;
}
	
