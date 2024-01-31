#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long factorial=1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        cout<<"not a factorial";
    }
    else{
        for(int i=1;i<=n;i++){
            factorial *= i;
        }
        cout<<"factorial of"<<n<<" "<<factorial;
    }
}
