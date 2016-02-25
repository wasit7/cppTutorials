#include<iostream>
using namespace std;
void func(int * const p){
    int y;
    *p=4;
    p=&y;
    y=1;
}
int main(){
    int x,y;
    int const *p=&x;
    x=5;//init
    printf("before: %p",p);
    p=&y;//address of x
    printf("after: %p",p);
    //*p=7;//value of address
    //func(p);
    printf("%d",*p);
}