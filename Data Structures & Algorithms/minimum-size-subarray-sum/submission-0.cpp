class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int minArr =INT_MAX; // 0 , 5, 4, 3

        int left = 0;

        int windowSum =0; //0,2,3,8,9,14,12,11,6,9

        for(int right {}; right<nums.size(); right++){

            windowSum += nums[right]; 

            while(windowSum >= target){
                
                minArr = min(minArr, right-left+1); 
                windowSum -= nums[left]; 
                left++;
            }
        }
        if(minArr == INT_MAX) return 0;
        return minArr;
    }
};