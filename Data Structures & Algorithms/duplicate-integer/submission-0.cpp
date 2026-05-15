class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> feq;

        for(const int num: nums){
            feq[num]++;
        }

         for(const int num: nums){
            if(feq[num] >= 2) return true;
        }
        return false;
    }
};