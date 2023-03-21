#include<iostream>
using namespace std;
void prime(){
    int a;
    int b;
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++){
        count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }
    return;
}
int main(){
    prime();
    return 0;
}