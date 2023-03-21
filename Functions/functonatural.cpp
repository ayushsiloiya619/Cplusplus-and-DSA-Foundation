#include<iostream>
using namespace std;
int sqr(){
    int n;
    cin>>n;
    int res;
    for(int i=1;i<=n;i++){
        res=i*i;
        cout<<res<<" ";
    }
    return res;
}
int main(){
    sqr();
    return 0;
}