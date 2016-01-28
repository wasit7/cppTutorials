#include<iostream>
using namespace std;
class Base { 
    private: 
        int MyPrivateInt=1; 
    protected: 
        int MyProtectedInt=2; 
    public: 
        int MyPublicInt=3; 
}; 
class Derived : Base { 
    public: 
        //int foo1() { return MyPrivateInt;} // Won't compile! 
        int foo2() { return MyProtectedInt;} // OK 
        int foo3() { return MyPublicInt;} // OK 
}; 
class Unrelated { 
private: 
    Base B; 
public: 
    //int foo1() { return B.MyPrivateInt;} // Won't compile! 
    //int foo2() { return B.MyProtectedInt;} // Won't compile 
    int foo3() { return B.MyPublicInt;} // OK 
}; 
int main(){
    Derived derived;
    Unrelated unrelated;
    cout<<"derived.foo2(): "<<derived.foo2()<<endl;
    cout<<"derived.foo3(): "<<derived.foo3() <<endl;
    cout<<"unrelated.foo3(): "<<unrelated.foo3()<<endl;
    return 0;
}