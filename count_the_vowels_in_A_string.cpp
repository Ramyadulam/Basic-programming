#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="prepinsta";
    int vowels=0;
    for(int i=0;i<str[i];i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' 
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
            
        }
    }
    
    cout<<"Total vowels: "<<vowels;
    
}
