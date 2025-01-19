#include<iostream>
using namespace std ;

void minmax( int array[], int length, int *min, int *max){

    for(int i = 0;i<length;i++){
        if(*max < array[i]){
            *max = array[i];
        }
        if(*min > array[i]){
        *min = array[i];
}
}
}
int main(){

    int length = 9;
    int arr[9];
    int i;
    for(i=0;i<length;i++){
        cin>>arr[i];
    }
    //int array[length] = {10,35,7,21,9,10,11,22,3};

    int min = arr[0];
    int max = arr[0];
    minmax(arr, length, &min, &max);

    cout <<"Min value is : "<<min <<'\n';
    cout<<"Max value is : "<< max<<'\n';

return 0;

}
