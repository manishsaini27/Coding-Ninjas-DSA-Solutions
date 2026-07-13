#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int> nums){
    int nums[4] = {1,1,2,1};
    for(int val:nums){
        int digit = nums[val] ^ nums[val+1];
        return digit;
    }
}
