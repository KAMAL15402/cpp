#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,i=0;
   int b=0;
   cin>>n;
   while (n!=0)
   {int rem=n%2;
   b=rem*(pow(10,i))+b;
   n=n/2;
   i++;

   }
   cout<<b;
    return 0;
}