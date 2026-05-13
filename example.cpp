#include <iostream>
#include <string>
using namespace std;    
string reverse(string s){
        string rev = "";
        for(int i = s.length()-1;i>=0;i--){
            rev = rev+s[i];
        }
        return rev;
    
}

int main(){
    string str = "HANNAH";
    string reversed = reverse(str);
    if(str==reversed){
        cout<<"Palindrome ";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}   