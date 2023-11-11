#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int valA = a1-a2;
        int valB = b1-b2;
        int net = valA+valB;
        
        if(net<0){
            cout<<"YES"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}