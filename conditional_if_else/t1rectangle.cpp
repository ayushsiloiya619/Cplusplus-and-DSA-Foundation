#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length;
    cin>>breadth;
    if(length==breadth){
        cout<<"It's a square";
    }
    else{
        cout<<"Rectangle";
    }
    return 0;
}