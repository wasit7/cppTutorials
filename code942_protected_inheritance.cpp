#include<iostream>
using namespace std;
class A{
public:
    void print1(){cout<<"it's A"<<endl;}
};
class B:protected A{
public:
    void print2(){
        cout<<"it's B"<<endl;
        print1();
    }
};
class C: protected B{
public:
    void print3(){
        cout<<"it's C"<<endl;
        print2();
    }
};
int main(){
    C c;
    c.print3();
    return 0;
}