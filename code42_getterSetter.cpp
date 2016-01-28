#include<iostream>
using namespace std;

class Obj{
    public:
        float getMass(){
            return mass;
        }
        void setMass(float m){
            mass=m;
        }
    private:
        float mass;
};
int main(){
    Obj stone;
    stone.setMass(5);
    cout<<"Mass is "<<stone.getMass()<<endl; //cannot access getArea()
    return 0;
}