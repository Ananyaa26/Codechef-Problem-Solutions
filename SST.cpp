#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int A,B;
	    cin>>A>>B;
	    int first = A*10;
	    int second = B*5;
	    if(first==second)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(first > second)
	    {
	        cout<<"First"<<endl;
	    }
	    else if(first<second)
	    {
	        cout<<"Second"<<endl;
	    }
	}
	return 0;
}
