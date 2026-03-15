#include<iostream>
using namespace std;

class laptob{
    private:
    string brand;
    double price;

    public:
    laptob(string b, double p){
        brand=b;
        price=p;

    }
    void show(){
        cout<<"laptob brand : "<<brand<<endl;
        cout<<"labtop price : "<<price<<endl;
    }
    
};

int main(){
    laptob l1("dell",50000);
    l1.show();

    return 0;
}




