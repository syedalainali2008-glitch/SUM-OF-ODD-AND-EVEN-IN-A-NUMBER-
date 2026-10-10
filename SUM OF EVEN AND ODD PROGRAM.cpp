#include<iostream>
using namespace std;
int main()
{
    int number=0;
    int odd=0;
    int even=0;
    int integer;
    cout<<"ENTER YOUR NUMBER:";
    cin>>integer;
    for(number;
    number<=integer;number++){
        if(number%2==0){
            even=even+number;
        }else if (number%2!=0){
            odd=odd+number;
    }
        
}
    cout<<"THIS IS YOUR TOTAL COUNT OF ODD:"<<odd<<endl;
    cout<<"THIS IS YOUR TOTAL COUNT OF EVEN:"<<even<<endl;
}
