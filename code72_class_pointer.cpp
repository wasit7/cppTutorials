#include<iostream>
using namespace std;
class Obj{
    public:
    int id;
};
void swap_id_reference(Obj &a, Obj &b){
    int temp=a.id;
    a.id=b.id;
    b.id=temp;
}
void swap_id_pointer(Obj *a, Obj *b){
    int temp=a->id;
    a->id=b->id;
    b->id=temp;
}
int main(){
    Obj a,b;
    a.id=0;
    b.id=1;
    cout<<"1 a.id="<<a.id<<", b.id="<<b.id<<endl;
    swap_id_reference(a,b);
    cout<<"2 a.id="<<a.id<<", b.id="<<b.id<<endl;
    swap_id_pointer(&a,&b);
    cout<<"3 a.id="<<a.id<<", b.id="<<b.id<<endl;
    return 0;
}