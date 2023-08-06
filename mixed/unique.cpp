 #include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,2,1,1,3};
 int a[100],x=0;
        for(int i=0;i<6;i++){
            int sum=0;
            if (arr[i]==INT_MIN)
                break;
            for(int j=0;j<6;j++){
                if(i==j)
                  {  j++;
                     sum++; 
                  }
                if(arr[i]==arr[j]){
                    sum++;
                    arr[j]=INT_MIN;
                }
                
            }
            a[x]=sum;
                cout<<a[x];
                x++;
        }
return 0;
}