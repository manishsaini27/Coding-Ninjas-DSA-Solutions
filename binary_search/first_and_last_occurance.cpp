#include<iostream>
using namespace std;

int firstoccur(int arr[], int n, int key){
    int start = 0;
    int end =n-1;
    int mid = start +(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            end = mid-1;
        }else if(key > arr[mid]){
            start = mid+1;
        }else if(key< arr[mid]){
            end = mid -1;
        }

        mid  = start +(end-start)/2;
    }
    return ans;
}
int lastoccur(int arr[], int n, int key){
    int start = 0;
    int end =n-1;
    int mid = start +(end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]== key){
            ans = mid;
            start = mid+1;
        }else if(key > arr[mid]){
            start = mid+1;
        }else if(key< arr[mid]){
            end = mid -1;
        }

        mid  = start +(end-start)/2;
    }
    return ans;
}
 

int main() {
    int evenarr[6]={1,1,2,2,2,3};
    cout<< "The first occurnace of the key is " <<firstoccur(evenarr,6 ,2) << endl;
    cout<< "The last occurance of the key is " << lastoccur(evenarr,6,2) << endl;
}