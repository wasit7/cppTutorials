#include <iostream>
using namespace std;
class Out{
  public: 
  string s;
  Out(string _s=""){s=_s;}
  void show(){
    cout<<s<<endl;
  }
};
Out& operator<< (Out& out, string s2){
  out.s+=s2+" ";
  return out;
}
int main(){
  Out myout;
  myout<<"Hello"<<"my"<<"world!";
  myout.show();
  return 0;
}