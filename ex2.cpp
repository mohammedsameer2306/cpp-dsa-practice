#include<iostream>
using namespace std;    
void count(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "The sum of the array is: " << sum << endl;
   
}
int main(){
    int a[5] = {24, 5, 1, 15, 20};
    count(a, 5);
    return 0;
}