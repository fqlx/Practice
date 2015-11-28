#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()  
 {  
   int t,test,total;  
   scanf("%d",&test);  
   while(test--){  
     scanf("%d",&t);  
     total=1;  
     int flag=1;  
     while(t--)  
     {  
       if(flag){  
         if(total==1){  
           total+=1;  
         }else{  
         total*=2;  
         }  
       flag--;  
       }  
       else{  
         total+=1;  
         flag++;  
       }  
     }  
     printf("%d\n",total);  
   }  
 }   
