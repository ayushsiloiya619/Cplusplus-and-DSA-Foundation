#include<iostream>
using namespace std;
int main(){
    int num1,num2,res;
    char ch;
    cout<<"Enter the operator "<<endl;
    cin>>ch;
    switch(ch){
        case"+":
        cout<<"Enter the two number to add"<<endl;
        cin>>num1;
        cin>>num2;
        res=num1+num2;
        cout<<"The result is "<<res<<endl;
        break;
        case"-":
        cout<<"Enter the two numbers to subtract"<<endl;
        cin>>num1;
        cin>>num2;
        res=num1-num2;
        cout<<"The result is "<<res<<endl;
        break;
        case"/":
        cout<<"Enter the two number to divide"<<endl;
        cin>>num1;
        cin>>num2;
        res=num1/num2;
        cout<<"The result is "<<res<<endl;
        break;
        case"*":
        cout<<"Enter two number to multiply"<<endl;
        cin>>num1;
        cin>>num2;
        res=num1*num2;
        cout<<"The result is "<<res<<endl;
        break;
        default:
        cout<<"Wrong choice !";
        break;
    }
    return 0;
}