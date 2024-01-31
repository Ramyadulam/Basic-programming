#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    cout<<"Enter a year";
    if(year%400 || year%4==0){
        cout<<year<<"leap year";
    }
    else{
        cout<<year<<"not leap year";
    }
}
