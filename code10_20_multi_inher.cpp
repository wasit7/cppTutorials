#include<iostream>
using namespace std;
class Alpha{
public:
  int x;
  Alpha(){ cout<<"construct Alpha\n";}
  ~Alpha(){ cout<<"destroy Alpha\n";}
};
class Beta{
public:
  Beta(){ cout<<"construct Beta\n";}
  ~Beta(){ cout<<"destroy Beta\n";}
};
class Chi: public Beta, public Alpha{ //private by default
public:
  Chi(){ cout<<"construct Chi\n";}
  ~Chi(){ cout<<"destroy Chi\n";}
};
int main(){
    Chi c;
    cout<<c.x;
    return 0;
}