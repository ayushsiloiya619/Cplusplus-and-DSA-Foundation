#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<"The number you entered is negative and skipped!"<<endl;
    }
    else{
        cout<<"The number is "<<num<<endl;
    }
    return 0;
}