/*
*
*   https://www.hackerrank.com/challenges/diagonal-difference
*
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n, A[102][102], d1 = 0, d2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if(i==j)
                d1+=A[i][j];
            if(i+j==n-1)
                d2+=A[i][j];
        }
    }
    cout << abs(d1-d2) << endl;
    return 0;
}
