#include<iostream>
using namespace std;
#include<vector>
//it is for finding maximum number of consecutive for both 0 and 1
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int large=0;
        int count_ones=0;
        int count_zeros=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count_zeros++;
                count_ones=0;
                large= max(large,count_zeros);
            }
            else{
                count_ones++;
                count_zeros=0;
                large=max(large,count_ones);
            }
          
        }
        return large;
    }
};
//it for finding maximum consecutive of only 1
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int large=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                large= max(large,count);
            }
            else{
                count=0;
            }
        }
        return large;
    }
};