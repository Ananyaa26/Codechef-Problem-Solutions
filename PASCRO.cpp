#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        
        int counta = 0;
        int countb = 0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                continue;
            }
            else if((a[i] =='R'&& b[i]=='S')||(a[i] =='S'&& b[i]=='P')||(a[i] =='P'&& b[i]=='R')){
                counta++;
            }else if((a[i] =='S'&& b[i]=='R')||(a[i] =='P'&& b[i]=='S')||(a[i] =='R'&& b[i]=='P')){
                countb++;
            }
        }
        
        int val = 0;
        if(countb>=counta){
            val = (counta+countb)/2;
            val+=1;
            cout<<(val-counta)<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    
}