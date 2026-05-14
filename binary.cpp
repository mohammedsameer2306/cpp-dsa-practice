#include <iostream>
using namespace std;

int binsrch(int arr[],int low,int high,int target){
     
     
     if(low > high){
        return -1;
    }
    int mid = (low+high)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if (target<arr[mid])
        {
            return binsrch(arr,low,mid-1,target);
        }
        else{
            return binsrch(arr,mid+1,high,target);
        }
        

}
int main(){
    int array[]={1,2,3,4,5,6};
    cout<<binsrch(array,0,5,2);
    return 0;
}