#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   int a[3];
	   for(int i = 0 ; i < 3; i ++){
	       cin>>a[i];
	   }
	   int n = 0;
	   int p = 0;
	   for(int i = 0 ; i < 3; i++){
	       if(a[i]>0){
	           p++;
	       }else if (a[i]<0){
	           n++;
	       }
	   }
	   if(n>=1 && p>=1){
	       cout<<"Yes"<<endl;
	   }else{
	       cout<<"No"<<endl;
	   }
	   
	}
	return 0;
}
