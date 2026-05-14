#include<iostream>
using namespace std;
void printnumbers(int n){
   
    if(n==0){
        return;
    }
    cout << n << " ";
   return printnumbers(n-1);

}
int main(){
   printnumbers(5);
    return 0;
}