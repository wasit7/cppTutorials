#include<iostream>
#include <string>
using namespace std;
//no function prototype is required
class Man{
    private:
        string hand;
        void isTouch (){
            hand+="is touched";
        }
        friend void friendlyHold(Man);
        friend void friendlyTouch(Man);
    public:
        Man(){
            arm="My hand ";
        }
        
};
void friendlyHold(Man jobs){
    jobs.arm+="is held";
    cout << jobs.arm << endl;
}
void friendlyTouch(Man jobs){
    jobs.isTouch();
    cout << jobs.arm << endl;
}

int main(){
    Man jobs;
    friendlyKick(jobs);
    friendlyTouch(jobs);
    return 0;
}
