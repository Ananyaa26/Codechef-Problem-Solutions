#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int r1,r2;
    cin>>r1>>r2;
    
    int d1,d2;
    cin>>d1>>d2;
    
    int d = r1+d1;
    int e = r2+d2;
    
    if(e>d){
        cout<<"EVERULE"<<endl;
    }else{
        cout<<"DOMINATER"<<endl;
    }
}