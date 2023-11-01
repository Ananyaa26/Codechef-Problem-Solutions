#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    
    {
        long long N;
        cin>>N;
        if(N%2==0 || N==1){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
        
    }
}
