#include<iostream>
using namespace std;

class Rect{
    public:
        int width,height;
        Rect(int w, int h){
            width=w; height=h;
        }
        int getArea(){
            return width*height;
        }
};

int main(){
    Rect myrect(2,3);
    cout<<"myrect.area() is "<<myrect.getArea();
    return 0;
}