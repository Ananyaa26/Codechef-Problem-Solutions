#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    
	    int c1=0,m1=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]!=0) 
	        {
	            c1++;
	        }else {
	            m1=max(c1,m1);
	            c1=0;
	        }
	    }
	    
	    m1=max(c1,m1);
	    
	    int m2=0,c2=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	        if(b[j]!=0) 
	        {
	            c2++;
	        }else
	        {
	           m2=max(c2,m2);
	           c2=0;
	        }
	    }
	    m2=max(c2,m2);
	    
	    if(m1>m2) 
	    {
	        cout<<"Om"<<endl;
	    }
	    else if(m1<m2) 
	    {
	        cout<<"Addy"<<endl;
	    }
	    else 
	    {
	        cout<<"Draw"<<endl;
	    }
	    
	    
	}
	return 0;
}
