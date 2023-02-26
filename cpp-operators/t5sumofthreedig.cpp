#include<iostream>
using namespace std;
int main(){
    int num=123;
    int sum;
    int digit;
    for(int i=0 ; i<4;i++){
       digit=num%10;
       sum=sum+digit;
       num=num/10;
    }
    cout<<"The sum is : "<<sum;
    return 0;
}