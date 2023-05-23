//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> // can easily find out the factorial of large number using this library
using namespace boost::multiprecision; 
using namespace std;

int main(){
    int t;    //no. of testcases
    cin>>t; 
    while(t--){
        int n;    //input integer
        cin>>n;
      cpp_int count=1;
        for(int i=1;i<=n;i++){   // 'i' starting from 1, since n>0
            count = count *i; // e.g. -> (for n=3) -> count=1*1=1
                                                    //count=1*2=2
                                                    //count=2*3=6(which is the factorial of 3)
                                        
        }
    cout<<count<<endl;    //display output
        
    }
}


