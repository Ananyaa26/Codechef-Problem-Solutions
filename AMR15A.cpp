#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	vector<int>num(N);
	int even_armed = 0;
	int odd_armed = 0;
	for(int i = 0 ; i < N; i++){
	    cin>>num[i];
	}
	for(int j = 0 ; j < N ; j++){
	    if(num[j]%2 == 0){
	        even_armed++;
	    }else{
	        odd_armed++;
	    }
	}
	if(even_armed > odd_armed){
	    cout<<"READY FOR BATTLE";
	}else{
	    cout<<"NOT READY";
	}
	return 0;
}
