#include<iostream>
using namespace std ;
int maxFreq(int arr[], int n){
    int count = 1;
    int maxcount = 1;
    int element = arr[0];
    for (int i=1; i< n; i++) {
        if (arr[i] == arr[i-1]){
            count ++;
        }else {
            count = 1;
        }if(count > maxcount){
            maxcount = count ;
            element = arr[i];


        }
    }
    return element;
    
}
int main (){
    int arr[6]={1,1,4,5,6};
    cout<<"maximum element in the array is " << maxFreq(arr, 6)<< endl;
}