#include <iostream>
#include <fstream>
using namespace std;
#define rmax 3
#define cmax 3

int main () {
  ofstream fout ("writeread.tsv");
  for(int r=0;r<rmax;r++){
    for(int c=0;c<cmax;c++){
      fout<<r*cmax+c<<"\t";
    }
    fout<<endl;
  }
  fout.close();
  
  ifstream fin ("writeread.tsv");
  int A[rmax][cmax];
  for(int r=0;r<rmax;r++){
    for(int c=0;c<cmax;c++){
      fin>>A[r][c];
    }
  }
  fin.close();
  
  for(int r=0;r<rmax;r++){
    for(int c=0;c<cmax;c++){
      cout<<A[r][c]<<" ";
    }
    cout<<endl;
  }
  return 0;
}