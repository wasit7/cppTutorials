#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"Constructing A"<<endl;
    }
    ~A(){
        cout<<"Destructing A"<<endl;
    }
};
class B:private A{
public:
    B(){
        cout<<"Constructing B"<<endl;
    }
    ~B(){
        cout<<"Destructing B"<<endl;
    }
};
class C: private B{
public:
    C(){
        cout<<"Constructing C"<<endl;
    }
    ~C(){
        cout<<"Destructing C"<<endl;
    }
};
int main(){
    C c;
    return 0;
}