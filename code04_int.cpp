#include<iostream>
#include<climits>
using namespace std;

int main(){
    int min,max;
    min=INT_MIN;
    max=INT_MAX;
    cout<<"min is "<<min<<endl;
    printf("min is %x \n\n",min);
    
    cout<<"max is "<<max<<endl;
    printf("min is %x \n\n",max);
    
    cout<<"( max + 1) is "<<max+1<<endl;
    printf("( max + 1) is  %x \n\n",max);
    
    cout<<"( min - 1) is "<<min-1<<endl;
    printf("( min - 1) is  %x \n\n",max);
    
    cout<<" Why 0xffffffff is "<< (int)0xffffffff <<" ?";
    return 0;
}