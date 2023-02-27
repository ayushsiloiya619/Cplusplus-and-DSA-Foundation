#include<iostream>
using namespace std;
int main(){
    int CP,SP;
    cout<<"Enter the cost price of an item "<<endl;
    cin>>CP;
    cout<<"Enter the selling price of an item "<<endl;
    cin>>SP;
    if(CP>SP){
        int loss=CP-SP;
        cout<<"The loss is "<<loss<<endl;
    }
    else{
        int profit=SP-CP;
        cout<<"The profit is "<<profit<<endl;
    }
    return 0;
}