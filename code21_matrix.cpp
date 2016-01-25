#include <iostream>
using namespace std;
int main(){
    int m,n,o,rmax,cmax;
    int A[10][10],B[10][10],C[10][10];
    cout<<"Please input:";
    cin>>m; cin>>n; cin>>o;
    rmax=m; cmax=n;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cin>> A[r][c];
        }
    }
    rmax=n; cmax=o;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cin>> B[r][c];
        }
    }
    
    cout<<"Matrix A:"<<endl;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cout<<" "<< A[r][c];
        }
        cout<<endl;
    }
    
    cout<<"Matrix B:"<<endl;
    rmax=n; cmax=o;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cout<<" "<< B[r][c];
        }
        cout<<endl;
    }
    ////
    //add you calculation here
    ////
    cout<<"A x B =C:"<<endl;
    rmax=n; cmax=o;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cout<<" "<< C[r][c];
        }
        cout<<endl;
    }
    return 0;
}