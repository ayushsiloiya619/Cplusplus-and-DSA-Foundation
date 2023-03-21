#include<iostream>
using namespace std;
int main(){
    int num,str,last_dig,rev=0;
    cout<<"Enter the number: ";
    cin>>num;
    str=num;
    while(str>0){
        last_dig=str%10;
        str=str/10;
        rev=rev*10+last_dig;
    }
    cout<<"The rev is: "<<rev<<endl;
    return 0;
}