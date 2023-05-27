#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int sx,sy,ex,ey;
	    cin>>sx>>sy>>ex>>ey;
	    if(sx!=ex && sy!=ey) cout<<"1"<<endl;
        else cout<<"2"<<endl;
	}
	return 0;
}
