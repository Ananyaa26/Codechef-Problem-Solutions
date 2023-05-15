#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int PA,PB,QA,QB;
	    cin>>PA>>PB>>QA>>QB;
	    int P_time = max(PA,PB);
	    int Q_time = max(QA,QB);
	    if(P_time == Q_time){
	        cout<<"TIE"<<endl;
	    }else if (P_time<Q_time){
	        cout<<"P"<<endl;
	    }else{
	        cout<<"Q"<<endl;
	    }
	}
	return 0;
}
