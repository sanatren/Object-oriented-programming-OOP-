#include<stdio.h>
int main(){

int ret(int);
}

int ret(int n){
     n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            return 1;
        }
        else{
            continue;
        }
        return 0;
    }
}
