#include<iostream>
using namespace std;

class Obj{
  public:
    static int x;
    void setX(int _x){
        x=_x;
    }
    int getX();
};
int Obj::x=5;
int main(){
    Obj myobj1;
    Obj myobj2;
    myobj1.setX(7);
    cout<<"myobj1.x: "<<myobj1.x<<endl;
    cout<<"myobj2.x: "<<myobj2.x<<endl;
    
    myobj1.setX(13);
    cout<<"myobj1.x: "<<myobj1.x<<endl;
    cout<<"myobj2.x: "<<myobj2.x<<endl;
    return 0;
}
int Obj::getX(){
    return x;
}
