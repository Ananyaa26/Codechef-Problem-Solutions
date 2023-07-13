#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;     
    while(T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;    

        int A, B;
        if( (X*Y)%Z == 0 )        
        {
            A = X*Y;          
            B = Z;                
            cout << A << " " << B << endl;
        }
        else if( (Y*Z)%X == 0 )
        {
            A = Y*Z; integers.
            B = X
            cout << A << " " << B << endl;
        }
        else if( (Z*X)%Y == 0 )
        {
            A = Z*X;
            B = Y;.
            cout << A << " " << B << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}