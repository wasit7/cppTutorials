#include<iostream>
using namespace std;
class Obj{
  public:
    int x;
};
void showX_from_outside(Obj a){
    cout<<a.x;
}
int main(){
    Obj a;
    a.x=7;
    showX_from_outside(a);
}