#include<iostream>
#include<cfloat>
using namespace std;

int main(){
    float min,max;
    min=FLT_MIN;
    max=FLT_MAX;
    cout<<"min is "<<min<<endl;
    //we need to convert float to unsign int using pointer
    //*(unsigned int*)&float
    printf("min is %x \n\n",*(unsigned int*)&min);
    
    cout<<"max is "<<max<<endl;
    printf("max is %x \n\n",*(unsigned int*)&max);
    
//    float mynan=0.0f/0.0f;
//    cout<<"mynan is "<<mynan<<endl;
//    printf("mynan is %x \n\n",*(unsigned int*)&mynan);
    
//    float myinf=1.0f/0.0f;
//    cout<<"myinf is "<<myinf<<endl;
//    printf("myinf is %x \n\n",*(unsigned int*)&myinf);
    
    float myzero=0.0f;
    cout<<"myzero is "<<myzero<<endl;
    printf("myzero is %08x \n\n",*(unsigned int*)&myzero);
    return 0;
}
