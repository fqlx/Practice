/*
*  https://www.hackerrank.com/challenges/chocolate-feast
*
/

#include <stdio.h>
 
int how_many_can_get(int N, int C, int M);
 
int main(){
    int N; // Little Bob's money in his pocket
    int C; // The price of each chocolate
    int M; // the store offers a discount for every M wrappers
    int T; // test case
 
    scanf("%d", &T);
 
    while (T--){
        scanf("%d %d %d", &N, &C, &M);
        printf("%d\n", how_many_can_get(N, C, M));
    }
 
    return 0;
}
 
int how_many_can_get(int N, int C, int M){
    int chocolate;
    int wrapper;
    int temp;
 
    chocolate = N / C;
    wrapper = chocolate;
    while (1){
        temp = wrapper / M;
        if (temp == 0){
            break;
        }
        chocolate += temp;
        wrapper -= (temp*M);
        wrapper += temp;        
    }
 
    return chocolate;
}
