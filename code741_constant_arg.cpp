#include<iostream>
using namespace std;
void func( int * const p ){
    int y;
    p=&y;
    *p=4;
}
int main(){
    int x;
    int *p=&x;
    x=5;//init
    func(p);
    cout<<x;
}