#include<iostream>
using namespace std;
int main(){
    int a,b;
    int c;
    cin>>c;
    switch(1){
        case 1:cout<<"the note of 100 rupees  "<<c/100<<endl;
        c=c%100;
               
        case '2':cout<<"the note of 50 rupees"<<c/50<<endl;
        c=c%50;
        
        case '3':cout<<"the note of 20 rupees"<<c/20<<endl;
        c=c%20;
        case '4':cout<<"the note of 1 rupees"<<c/1<<endl;
         c=c%1;
    }
    return 0;
}