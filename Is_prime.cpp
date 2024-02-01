#include <iostream>
using namespace std;
int main()
{
    int i,n;
    bool is_prime=true;
    cout<<"Enter the positive integer: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<"false";
    }
    for(i=2;i<n/2;i++){
        if(n%i==0){
        is_prime=false;
        break;
        }
    }
    if(is_prime){
        cout<<n<<"ïs a prime";
    }
    else{
        cout<<n<<"not a prime";
    }

    //by using functions
    #include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<prime(n);
}
}
