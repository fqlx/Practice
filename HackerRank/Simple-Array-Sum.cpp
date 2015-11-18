#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[n];
    int sum = 0;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int num;
        cin>>num;
        sum += num; 
    }
    cout<<sum;
    
    return 0;
}
