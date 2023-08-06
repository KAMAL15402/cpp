#include<iostream>
using namespace std;

 //if relative position is not the matter
 void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int l=0,h=n-1;
        while(l<=h){
            if(arr[l]<0){
                int temp = arr[h];
                arr[h]=arr[l];
                arr[l]=temp;
                h--;
            }else{
                l++;
            }
        }
        
    }

 //if matter
 void sortArrayBySigns(int a[],int n)
 {
    /*
    We can use two pointers to traverse through both positive and negative elements.
    First we will initialize left pointer as first element in given array 'a' which has non zero
    sign value then move right pointer till it reaches end or finds an element with different
    sign than current pointed by left pointer. Then swap these values using temporary variable
    until all positive numbers are on one side from zeros and vice versa. Finally print sorted
    array.*/
   
 }

int main() {
    int arr[1000],n;
    cout<<"Enter the size of array: "; cin>>n;
    for (int i = 0;i < n ; ++i) {
        cin >> arr[i];
        }
        segregateElements(arr,n);
        // for (int j : arr){
        //     cout<<j << " ";
        // }
         for (int i = 0;i < n ; ++i) {
        cout << arr[i];
        }
        
 
    return 0;
}