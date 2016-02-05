#include<iostream>

using namespace std;
int myFunc();
int main(){
    cout<<myFunc()<<endl;
    cout<<myFunc()<<endl;
    cout<<myFunc()<<endl;
    cout<<myFunc()<<endl;
}
int myFunc(){
    static int x=0;
    return x++;
}