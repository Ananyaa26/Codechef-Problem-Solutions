#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
    	cin>>s;
        int DD = stoi(s.substr(0, 2));
        int MM = stoi(s.substr(3, 2));
        
        if (DD > 12 && MM <= 12) {
            cout <<"DD/MM/YYYY\n";
        } else if (MM > 12 && DD <= 12) {
            cout <<"MM/DD/YYYY\n";
        } else {
            cout <<"BOTH\n";
        }	
	    
	}
	return 0;
}
