#include<iostream>
using namespace std;
class Robert{
    public:
    int id,age;
    Robert(){
        age=0;
        cout<<"creating\n";
    }
    ~Robert(){
        cout<<"sleeping\n";
    }
};
Robert* foo(Robert* mini){
    cout<<"in_foo\n";
    mini->age++;
    return mini;
}
int main(){
    Robert mini1,*mini2;
    mini2=foo(&mini1);
}