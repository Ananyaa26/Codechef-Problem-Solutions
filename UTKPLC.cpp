#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        char a,b,c;
        char x,y;
        cin>>a>>b>>c;
        cin>>x>>y;
        if(x==a||y==a)
        {
            cout<<a<<endl;
        }
        else if(x==b||y==b)
        {
            cout<<b<<endl;
        }else
        {
            cout<<c<<endl;
        }
	}
	return 0;
}
