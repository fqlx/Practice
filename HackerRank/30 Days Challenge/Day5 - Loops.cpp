#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    int T,a,b,n;
    cin>>T;
    for(int i=0;i<T;i++)
        {
            cin>>a>>b>>n;

        for(int j=0;j<n;j++)
            {

                a = a + (pow(2,j))*b;
                    cout<<a<<" ";
            }
        cout<<endl;

        }


    return 0;
}
