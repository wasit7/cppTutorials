#include<iostream>
#include <string>
using namespace std;
//no function prototype is required
class Man{
    private:
        string hand;
        void isTouch (){ hand+="is touched"; }
        friend void hold(Man);
        friend void touch(Man);
    public:
        Man(){ hand="My hand "; }
        
};
void hold(Man jobs){
    jobs.hand+="is held";
    cout << jobs.hand << endl;
}
void touch(Man jobs){
    jobs.isTouch();
    cout << jobs.hand << endl;
}
int main(){
    Man jobs;
    hold(jobs);
    touch(jobs);
    return 0;
}
