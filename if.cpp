#include<iostream>
using namespace std;
int main(){

char choice;
cout<<"هل تم تعبئة الكرش بنجاح؟ (y/n)"<<endl;
cin>>choice;

if(choice=='y'||choice=='Y'){
    cout<<"تم تعبئة الكرش بنجاح<<"<<endl;
}
else if(choice=='n'||choice=='N'){
    cout<<"لم يتم تعبئة الكرش بنجاح"<<endl;
}
else{
    cout<<"لا حول ولا قوة إلا بالله"<<endl;
}




}