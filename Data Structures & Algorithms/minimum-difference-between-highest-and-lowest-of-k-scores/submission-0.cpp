class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int minDiff = INT_MAX;
        int left = 0;
        sort(nums.begin(), nums.end());

        for(int right = k-1; right<nums.size(); right++){
            minDiff = min(minDiff, nums[right]- nums[left]);
            left++;
        }
        return minDiff;
    }
};