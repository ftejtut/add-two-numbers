#include<iostream>
#include<string>
using namespace std;

struct book{
    string isbn;
    string title;
    string author;
    bool available;
};

 void updateavailability(bool &status){
    status = !status;
 }
 int main(){
    book library[10];
    for(int i=0; i<5; i++){
        cout<<"enter data for book "<<i+1<<": "<<endl;
        cout<< "isbn:";
        cin>>library[i].isbn;
        cout<<"title:";
        cin>>library[i].title;
        cout<<"author:";
        cin>>library[i].author;
        library[i].available=true;

        cout<<endl;
        
    }
    updateavailability(library[0].available);

    cout<<"\nlibrary books:"<<endl;
    cout<<"---------------------------------"<<endl;

    for(int i=0; i<5; i++){
        cout<<"book"<<i+1<<endl;
        cout<<"isbn: "<<library[i].isbn<<endl;
        cout<<"title: "<<library[i].title<<endl;
        cout<<"author:"<<library[i].author<<endl;
        
        if(library[i].available)
        cout<<"available: Yes"<<endl;
        else
        cout<<"available: No"<<endl;

        cout<<"------------------------"<<endl;
    }

return 0;
 }