#include<stdio.h>
int main(){
    int i = 256;
    int j = 7;
    while(i%j!=0){
        i++;
    }
    if(i%j==0){
        printf("%d",i);
    }
    return 0;
}

