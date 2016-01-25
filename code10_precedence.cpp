#include <iostream>
int main() {
    int x=1;
    
    std::cout<<"out1:"<< x++ <<std::endl;
    std::cout<<"out2:"<< x <<std::endl;
    std::cout<<"out3:"<< ++x <<std::endl;
    std::cout<<"out4:"<< x <<std::endl;
    
    std::cout<<"out5:"<< 2*++x <<std::endl;
    std::cout<<"out6:"<< x <<std::endl;
    std::cout<<"out7:"<< 2*x++ <<std::endl;
    std::cout<<"out8:"<< x <<std::endl;
    
    x=1;
    int y =2;
    int z = x*2+ ++y<<1|2;
    std::cout<<"out x:"<< x <<std::endl;
    std::cout<<"out y:"<< y <<std::endl;
    std::cout<<"out z:"<< z <<std::endl;
}
