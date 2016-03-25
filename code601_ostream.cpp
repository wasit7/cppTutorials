#include<iostream>
using namespace std;
class Obj{
  private: 
    string s;
  public:
    Obj(){}// what will happend if we remove this line?
    Obj(string _s){
        s=_s;
    }
    friend ostream& operator<<(ostream& out, const Obj& A);
};
ostream& operator<<(ostream& out, const Obj& A) {
    return out<<" "<<A.s;
}
int main(){
    Obj A("Hello"), B("World!");
    cout<<A<<B;
    return 0;
}