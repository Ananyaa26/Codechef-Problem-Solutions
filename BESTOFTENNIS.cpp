#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int diff = x -y;
    
    if (diff == 0) {
        cout<<2<<endl;
    }
    
    else if (diff > 0 && diff % 2 == 0) {
        cout<<x+y<<endl;
    }
    
    else if (diff > 0 && diff % 2 != 0) {
        cout<<x+y-1<<endl;
    }
    
    else {
        cout<<x+y<<endl;
    }

    }
}