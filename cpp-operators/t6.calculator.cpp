#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value "<<endl;
    cin>>num1;
    cout<<"Enter the value "<<endl;
    cin>>num2;
    int sum=num1+num2;
    int diff=num1-num2;
    int divs=num1/num2;
    int mul=num1*num2;
    int mod=num1%num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
    cout<<"The diff of "<<num1<<" and "<<num2<<" is "<<diff<<endl;
    cout<<"The divs of "<<num1<<" and "<<num2<<" is "<<divs<<endl;
    cout<<"The mul of "<<num1<<" and "<<num2<<" is "<<mul<<endl;
    cout<<"The mod of "<<num1<<" and "<<num2<<" is "<<mod<<endl;
    return 0;
}
