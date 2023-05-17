#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
          cin >> a[i];
        }
        
        int c[n];
        for (int i = 0; i < n; i++) {
          c[i] = a[i];
        }
    
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                count++;
            }
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                if (count % 2 == 0) {
                    c[i] = 1 - a[i];
                } else {
                    c[i+1] = 1 - a[i+1];
                }
                count--;
            }     
        }
        
    for (int i = 0; i < n; i++) 
    {
      cout << c[i] << " ";
    }
    cout << endl;
    }
	return 0;
}
