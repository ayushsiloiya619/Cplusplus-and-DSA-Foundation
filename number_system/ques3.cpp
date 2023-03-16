#include<iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    cin>>n1>>n2;
    int ans=0;
    int ans1=0;
    int power=1;
    int pow2=1;
    while(n1>0){
        int last_digit=n1%10;
        ans+=last_digit*power;
        power=power*2;
        n1=n1/10;
    }
    int temp1=ans;
    while(n2>0){
        int last_digit2=n2%10;
        ans1+=last_digit2*pow2;
        pow2=pow2*2;
        n2=n2/10;
    }
    int temp2=ans1;
    if(temp1>temp2){
        cout<<temp1;
    }
    else if(temp2>temp1){
        cout<<temp2;
    }
    else{
        cout<<"None";
    }
    return 0;
}
//Output we get is 9.