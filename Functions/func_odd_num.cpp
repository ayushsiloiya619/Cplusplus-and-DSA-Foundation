#include<iostream>
using namespace std;
void odd_num(){
    int x;
    int y;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    return ;
}
int main(){
    odd_num();
    return 0;
}
//Output: 1 10
// 1 3 5 7 9