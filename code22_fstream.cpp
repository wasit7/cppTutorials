//please read more information at http://www.cplusplus.com/doc/tutorial/files/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream writefile ("fstream.txt");
  writefile << "This is the first line\nand here a second line.";
  writefile.close();
  
  ifstream readfile ("fstream.txt");
  string line;
  while ( getline (readfile,line) ){
    cout << line << '\n';
  }
  readfile.close();
  return 0;
}