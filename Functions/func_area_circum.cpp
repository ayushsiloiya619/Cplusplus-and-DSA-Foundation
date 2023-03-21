#include<iostream>
using namespace std;
int r=3;
void circum(){
    float circum=(2*3.14*r);
    cout<<circum<<endl;
    return ;
}
void area(){
    float area=(3.14*r*r);
    cout<<area<<endl;
    return ;
}
int main(){
    area();
    circum();
    return 0;
}