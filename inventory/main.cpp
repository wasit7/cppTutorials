#include <iostream>

using namespace std;



class Product{
    
    public :
    
    int tempID;
    static int LasttempID;
    
    string ID;
    string name;
    
    double price;
    double value;
    
    int quantity;
    
    
    Product(){
        tempID = price = LasttempID;
        LasttempID++;
    }
    
    bool operator <(Product other){
        if(price < other.price)
            return true;
        else
            return false;
    }
    
    bool operator >(Product other){
        if(price > other.price)
            return true;
        else
            return false;
    }
    
    bool operator == (Product other){
        if(price == other.price)
            return true;
        else
            return false;
    }
    

    
    void Value(){
        
        value = price*quantity;
        
        
    }
    
    void Add(){
    
        
        cout << "Enter ID:" << endl;
        cin >> ID;
        
        cout << "Enter name:" << endl;
        cin >> name;
    
        cout << "Enter price:" << endl;
        cin >> price;
        
        
        cout << "Enter quantity" << endl;
        cin >> quantity;
        
        
    }
    
    void Print(){
        
        cout << "tempID\t" << " ID\t" << " Name\t" << " Price\t" << " Quan\t" << endl;
        
        cout << tempID << "\t" << ID << "\t" << name << "\t" << price << "\t" << quantity;
        
    }
    
};

void sort (Product p[], int n){
    Product temp;
    //buble sort ---
    for (int i = n; i > 0; i--){
        for(int j = 1; j < i; j++){
            if(p[j-1]>p[j])
                temp = p[j];
                p[j] = p[j-1];
                p[j-1] = temp;
        }
        n--;
    }
    
}

int main() {
    std::cout << "Welcome To Product Table!" << std::endl;
    
    Product myproduct[4];
    
    //myproduct[0].Add();
    
    //myproduct[0].Print();
  
  
   for(int i=0; i<3; i++){
        
        cout<<myproduct[i].price<<endl;
    }
    
    sort(myproduct, 3);
    
    for(int i=0; i<3; i++){
        
        cout<<myproduct[i].price<<endl;
    }
    
    

}

int Product::LasttempID=0;


