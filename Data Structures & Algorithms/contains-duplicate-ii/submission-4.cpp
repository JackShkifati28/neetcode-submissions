class Solution {
public:

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> seen;
    int left = 0;
    
    for (int right = 0; right < nums.size(); right++) {
        // 2. SHRINK if window size > k
        if (right - left > k) {  // ← THIS is the condition
            seen.erase(nums[left]);
            left++;
        }
        // 1. ADD right element
        if (seen.find(nums[right]) != seen.end()) {
            return true;  // Found duplicate
        }
        seen.insert(nums[right]);
        
    
    }
    
    return false;
}
};