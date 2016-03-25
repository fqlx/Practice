#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float M,tip,tax,final;
    int T,X;
    cin>>M;
    cin>>T;
    cin>>X;
    tip = (T*M)/100;
    tax = (X*M)/100;
    final = M + tip + tax;
    cout<<"The final price of the meal is $"<<round(final)<<"."<<endl;
    
    return 0;
}
