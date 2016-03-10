#include<iostream>
using namespace std;

class Rect{
    public:
        int width,height;
        Rect(int w, int h){ width=w; height=h; }
        ~Rect(){ 
            cout<<"Removing\n";
        }
        int getArea(){ return width*height; }
};
void func(Rect r){
    cout<<"in_fuct "<<r.getArea()<<endl;
}
int main(){
    Rect myrect(2,3);
    cout<<"myrect.area() is "<<myrect.getArea()<<endl;
    func(myrect);
    return 0;
}
