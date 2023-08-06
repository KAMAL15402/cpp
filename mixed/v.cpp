#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
string s="dhdfhfgd";

    
    int z=0,one=0,two=0,three=0,four=0,five=0,six=0,sev=0,eig=0,nine=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            z++;
        }else if(s[i]=='1'){
            one++;
        }else if(s[i]=='2'){
           two++; 
        }else if(s[i]=='3'){
           three++; 
        }else if(s[i]=='4'){
           four++; 
        }else if(s[i]=='5'){
           five++ ; 
        }else if(s[i]=='6'){
           six++ ; 
        }else if(s[i]=='7'){
            sev++;
        }else if(s[i]=='8'){
            eig++;
        }else if(s[i]=='9'){
            nine++;
        }        

        
    }
    printf(" %d %d %d %d %d %d %d %d %d %d",z,one,two,three,four,five,six,sev,eig,nine);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
