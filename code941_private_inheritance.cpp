#include<iostream>
using namespace std;
class A{
public:
    void print(){cout<<"it's A"<<endl;}
};
class B:private A{
public:
    void print(){
        cout<<"it's B"<<endl;
        A::print();
    }
};
class C: private B{
public:
    void print(){
        cout<<"it's C"<<endl;
        B::print();
    }
};
int main(){
    C c;
    c.print();
    return 0;
}