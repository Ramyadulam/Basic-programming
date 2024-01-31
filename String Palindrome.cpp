#include<iostream>
using namespace std;
string isPalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    string a="ABCDE";
    cout<<isPalindrome(a);
    //return isPalindrome(a);
}
