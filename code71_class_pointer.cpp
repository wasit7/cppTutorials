#include<iostream>
using namespace std;
class Obj{
    public:
    int id;
    void inc(){++id;}
};
int main(){
    Obj a,b;
    Obj *pa,*pb;
    pa=&a;
    pb=&b;
    pa->id=5;
    b.id=7;
    cout<<"1 a.id="<<a.id<<", b.id="<<b.id<<endl;
    pb->inc();
    cout<<"2 a.id="<<a.id<<", b.id="<<b.id<<endl;
    return 0;
}