#include <iostream>
#include <numeric>
using namespace std;

int tribonatchi(int n)  
{
    int A[3] = { 0,1,1 };

    if (n < 3)
        return A[n];
    
    for (int i = 0; i < n+1; i++)
    {
        int new_trib = A[0] + A[1] + A[2];
        A[0] = A[1];
        A[1] = A[2];
        A[2] = new_trib;
    }
    return A[2];
}

int main()
{
    cout << tribonatchi(25);
}
