#include<iostream>
using namespace std;

int getmax(int *ptr,int size){
int max=*ptr;
for(int i=0; i<size; i++){
    if(*(ptr+i)>max){
        max=*(ptr+i);
    }
}
return max;

}

int main(){
int arr[4];
cout<<"enter 4 numbers"<<endl;
for(int i=0; i<4; i++){
    cin>>arr[i];
}
int result=getmax(arr,4);
cout<<"the maximum number is"<<result<<endl;
}



