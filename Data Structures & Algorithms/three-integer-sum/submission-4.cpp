class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        // [-4,-1,-1,0,1,2]

        for(int i {}; i < nums.size(); i++){
          
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
           
            int left = i+1;  // 1,2, 3, 4, 5, 2 , 3, 3
            int right =nums.size()-1; // 5, 5, 4, 3, 5, 4
            
            while(left < right){
                // -4+-1+2 = -3
                // -4 +-1+2  =-3
                // -4+0,2 = -2
                // -4 +1+2 =-1
                //  -1+-1+2 = 0
                // -1+-1+1 = -1
                // -1 +0+1 = 0
                // -1+0 +2 = 1
                int sum = nums[i]+nums[left]+nums[right]; 

                if(sum == 0){ 
                    // [-1,-1, 2],
                    // [-1,0,1]
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left]==nums[left-1]) {left++;}
                }
                else if (sum < 0) {left++;}
                else {right--;}
            } 

        } 
        
        return res;
 
    }
};
