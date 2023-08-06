#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start =0;
    int end =size-1;
    while(end>start){
        int a=arr[start];
        arr[start]=arr[end];
        arr[end]=a;
        start++;
        end--;
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int s=6;
    reverse(arr,s);
    
    for(int i =0;i<s;i++){
        cout<<arr[i]<<" ";
    }
   return 0; 
}