#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
	    double per =x * 0.20;
	    int total = ceil(100 / per);
	    cout<<total<<endl;    
        
    }
}