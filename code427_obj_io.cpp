#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //write file
    ofstream myfile1 ( "myfile.txt" );
        myfile1<<"Hello World!"<<endl;
        myfile1<<"Class cs112 is awesome!!"<<endl;
    myfile1.close();
    
    //read file
    ifstream myfile2 ( "myfile.txt" );
    for (string line; getline(myfile2, line); ){
        cout << line << endl;
    }
    myfile2.close();
    return 0;
}