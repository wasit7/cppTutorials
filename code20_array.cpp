#include <iostream>
#define N 10
int main() {
    int x[N];
    for(int i=0;i<N;i++){
        printf("x[%02d] = %5d\n",i,x[i]);
    }
    printf("\n");
    int y[N]={};
    for(int i=0;i<N;i++){
        printf("y[%02d] = %5d\n",i,y[i]);
    }
}