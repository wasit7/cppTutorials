#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    int a=3, b=5, c=0;
    cout<<"(a,b,c) = ("<<a<<","<<b<<","<<c<<")"<<endl;
    c=add(a,b);
    cout<<"c=add(a,b);"<<endl;
    cout<<"(a,b,c) = ("<<a<<","<<b<<","<<c<<")"<<endl;
    swap(a,b);
    cout<<"swap(a,b);"<<endl;
    cout<<"(a,b,c) = ("<<a<<","<<b<<","<<c<<")"<<endl;
}