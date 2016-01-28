#include<iostream>
using namespace std;

class Rect{
    public:
        int width,height;
        int getArea(){
            return width*height;
        }
};

int main(){
    Rect myrect;
    myrect.width=2;
    myrect.height=3;
    cout<<"myrect.area() is "<<myrect.getArea();
    return 0;
}