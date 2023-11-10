#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"Old";
    }else if(x==y){
        cout<<"Same";
    }else{
        cout<<"New";
    }
}