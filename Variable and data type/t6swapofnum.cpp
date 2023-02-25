#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"value of a is "<<a<<endl;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"value of b is "<<b<<endl;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b;
    return 0;
}