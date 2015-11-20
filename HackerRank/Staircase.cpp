/*
*
*   https://www.hackerrank.com/challenges/staircase/
*
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,i,j,k;
    string A[N];
    cin>>N;
    for(i=N;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=N;k>=i;k--)
        {
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}
