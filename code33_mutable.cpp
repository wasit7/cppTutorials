#include<iostream>
using namespace std;

class Obj{
  public:
    int x;
    mutable int y;
    //const int z=4; wont compile
    void setX(int _x) {
        x=_x;
    }
    void setY(int _y) const{
        y=_y;
    }
};
int main(){
    Obj obj1;
    obj1.setX(5);
    obj1.setY(7);
    cout<<"x,y :"<<obj1.x<<","<<obj1.y<<endl;
    return 0;
}