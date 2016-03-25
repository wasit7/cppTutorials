#include<iostream>
using namespace std;
class A{
public:
    int id;
    A(int _id=0){
        id=_id;
        cout<<"Constructing A "<<id<<endl;
    }
    ~A(){cout<<"Destructing A "<<id<<endl;}
};
class B:public A{
public:
    A a1,a2;
    B():a1(1),a2(2){cout<<"Constructing B"<<endl;}
    ~B(){cout<<"Destructing B"<<endl;}
};
class C:public B{
public:
    C(){cout<<"Constructing C"<<endl;}
    ~C(){cout<<"Destructing C"<<endl;}
};
int main(){
    C c;
    return 0;
}