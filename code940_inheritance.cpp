#include<iostream>
using namespace std;

class Rect{
    public:
        int width,height;
        Rect(){}
        int getArea(){ return width*height; }
    protected:
        int key;
};
class Square: protected Rect{
    public:
        Square(int edge){
            width=edge;
            height=edge;
            cout<<key<<endl; //ok
            cout<<width<<endl; //ok
        }
};
int main(){
    Square mysq(5);
    //cout<<"mysq.area() is "<<mysq.getArea()<<endl; //cannot access getArea()
    return 0;
}