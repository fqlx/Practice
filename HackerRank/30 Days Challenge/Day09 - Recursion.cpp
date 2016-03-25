#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b)
{
    //base condition
    if(a==b)
        return a;
    else if(a==1 || b ==1)
        return 1;
    else
        return find_gcd(a > b ? a-b : a, b > a ? b-a :b);    
    return find_gcd(b,a%b);
}

int main() 
{
    int a,b;
    //Take input
    cin>>a>>b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}
