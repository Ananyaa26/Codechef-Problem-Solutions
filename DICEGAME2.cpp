#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        vector<int>num1(3);
        for(int i=0;i<3;i++)
        {
            cin>>num1[i];
        }
        vector<int>num2(3);
        for(int i=0;i<3;i++)
        {
            cin>>num2[i];
        }
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        
        int a = num1[1] + num1[2];
        int b = num2[1] + num2[2];
        
        if(a>b){
            cout<<"Alice"<<endl;
        }else if(a<b){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Tie"<<endl;
        }
        
	}
	return 0;
}
