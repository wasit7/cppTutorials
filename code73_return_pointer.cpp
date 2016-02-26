#include<iostream>
using namespace std;
class Obj{
    public:
    int id;
    Obj(int _id){id=_id;}
};
Obj* last_object(Obj* a, Obj* b){
    if(a->id < b->id){
        return b;
    }else{
        return a;
    }
}
int main(){
    Obj a(5),b(7);
    Obj* c=last_object(&a,&b);
    cout<<c->id;
}