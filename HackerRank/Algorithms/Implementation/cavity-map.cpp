/*
*
*  https://www.hackerrank.com/challenges/cavity-map/
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
    int n,i,j;  
    cin>>n;  
    char ip[n][n];  
    for(i=0;i<n;i++)  
   {  
     cin>>ip[i];    
   }  
   for(i=0;i<n*n;i++)  
   {  
     for(j=0;j<n;j++)  
     {  
       if(i == 0 || j == 0 || i == n-1 || j == n-1 )  
       {  
         cout<<ip[i][j];  
           
       }  
       else if(ip[i][j] > ip[i][j-1] && ip[i][j] > ip[i][j+1] && ip[i][j] >ip[i-1][j] && ip[i][j] > ip[i+1][j])  
       {  
         cout<<"X" ;    
       }  
       else  
       {  
         cout<<ip[i][j];  
       }  
     }  
     cout<<endl;  
   }  
   return 0;  
}  
