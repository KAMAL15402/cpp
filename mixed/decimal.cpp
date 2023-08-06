#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,d=0,i=0;
cin>>n;
while(n!=0)
{
    int digit=n%10;
    if (digit==1)
    {
        d=pow(2,i)+d;
    }
n=n/10;
i++;
}
cout<<d;
    return 0;
}