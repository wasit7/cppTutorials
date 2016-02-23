#include <iostream>
#include <fstream>
#include <sstream>
#define rmax 100
#define cmax 6
using namespace std;

class Record{
  public:
    string data[cmax];
    int row_num;
    
};
std::ostream& operator<<(ostream& out, const Record& rec) {
    for(int i=0; i<cmax; i++){
        out <<"\t"<< rec.data[i];
    }
    return out<<endl;
}
//ifstream& operator>>(ifstream& in, const Record* rec){
//    string line,d;
//    for (int r=0; getline(readfile, line); r++){
//        istringstream lstream(line);
//        for (int c=0; getline(lstream, d, ','); c++){
//            rec[r].data[c].assign("Hello");
//        }
//        cout<<endl;
//    }
//}
int main(){
    Record records[rmax];
    ifstream readfile( "sample_data.csv" );
    ofstream writefile( "out.csv" );
    
    int r=0;
    for (string line,d; getline(readfile, line); r++){
        //cout << line << endl;
        istringstream lstream(line);
        for (int c=0; getline(lstream, d, ','); c++){
            records[r].data[c].assign(d);
        }
        cout<<records[r];
    }
    records[0].row_num=r;
    readfile.close();
    
    for(int r=0;r<records[0].row_num;r++){
        for(int c=0;c<cmax;c++){
            writefile<<records[r].data[c]<<',';
        }
        writefile<<endl;
    }
    writefile.close();
    return 0;
}