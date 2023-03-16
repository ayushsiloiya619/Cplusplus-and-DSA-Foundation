#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    int power=1;
    int ans=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    while(sum>0){
        int parity_dig=sum%2;
        ans+=parity_dig*power;
        power=power*10;
        sum=sum/2;
    }
    cout<<ans;
    return 0;
}
//Output is 11111.
//Decimal to binary.