#include<iostream>
using namespace std;
void age(){
    int x;
    cin>>x;
    if(x>=18){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return ;
}
int main(){
    age();
    return 0;
}
//Output
//19 Yes
//17 No