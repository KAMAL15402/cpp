#include<iostream>
using namespace std;
int ap(int n){
int s=0;
int t=1;
if(n==1||n==2)
return n-1;
for(int i=3;i<=n;i++){
    int c=s+t;
    s=t;
    t=c;
}

return t;
}
int main(){
    
    cout<<ap(6);
    
    return 0;
}