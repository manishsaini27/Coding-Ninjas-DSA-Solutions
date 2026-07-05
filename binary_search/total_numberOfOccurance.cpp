#include<iostream>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int firstindex = 0;
    while(start <= end){
        if(arr[mid] == key) {
            firstindex = mid;
            end = mid -1;
        } else if(key > arr[mid]){
            start = mid +1;
        } else if (key < arr[mid]){
            end= mid - 1;
        }
        mid  = start + (end- start)/2;
    }
    return firstindex;
} 
int lastOccur(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int lastindex = 0;
    while(start <= end){
        if(arr[mid] == key) {
            lastindex = mid;
            start  = mid +1;
        } else if(key > arr[mid]){
            start = mid +1;
        } else if (key < arr[mid]){
            end= mid - 1;
        }
        mid  = start + (end- start)/2;
    }
    return lastindex;
} 


int main() {
    int evenArray[6] = {1,1,2,2,2,3};
    int totalNumberofOccurance = (lastOccur(evenArray , 6, 2) - firstOccur(evenArray , 6, 2) )+1;
    cout<< "The total number of accurance "<< totalNumberofOccurance << endl;


}