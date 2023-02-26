#include<iostream>
using namespace std;
int main(){
    int first,second,thrid,fourth,fifth,sum,num;
    num=12345;
    first=num/10000;
    num=num%10000;
    second=num/1000;
    num=num%1000;
    thrid=num/100;
    num=num%100;
    fourth=num/10;
    fifth=num%10;
    sum=first+fourth;
    cout<<"Th sum of first and second last digit is "<<sum<<endl;
    return 0;
}