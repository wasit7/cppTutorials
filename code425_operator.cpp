#include <iostream>
#include <math.h>
using namespace std;
class Vec2D{
private:
    float x,y;
public:    
    Vec2D(){ x = 0.0f; y = 0.0f;}
    Vec2D(float _x, float _y){
        x = _x;
        y = _y;
    }
    
    Vec2D operator - (Vec2D B){//subtraction
        Vec2D temp;
        temp.x = x - B.x;
        temp.y = y - B.y;
        return temp; 
    }

    Vec2D operator + (Vec2D B){//addition
        Vec2D temp;
        temp.x = x + B.x;
        temp.y = y + B.y;
        return temp; 
    }
    
    Vec2D operator = (Vec2D B){
        x = B.x;
        y = B.y;
        return *this;
    }

    Vec2D operator * (float k){
        Vec2D temp;
        temp.x = k * x;
        temp.y = k * y;
        return temp;
    }
    
    float operator *(Vec2D B){
        return x*B.x + y*B.y;
    }
    float operator !(){//prefix
        return sqrt(x*x+y*y);
    }
     
      ostream& operator<<(ostream& out, const Vec2D& A);
};

ostream& operator<<(ostream& out, const Vec2D& A) {
    return out << "( "<<A.x << ", "<< A.y << " )\n";
}

int main(){
    Vec2D A(3.0f, 4.0f),B(2.0f,1.0f),C;
    cout<< "A = "<<A;
    cout<< "B = "<<B;
    cout<< "A * 10 + B * 0.5 = "<< A*10.0f + B*0.5f;
    return 0;
}