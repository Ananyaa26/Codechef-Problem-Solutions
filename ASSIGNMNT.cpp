#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int val = x*y;
        int a = z*24*60;
        if(val<=a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}