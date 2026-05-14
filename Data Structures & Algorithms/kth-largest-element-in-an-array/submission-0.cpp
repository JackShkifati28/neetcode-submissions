class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>maxHeap;

        for(int i {}; i < nums.size(); ++i){
            maxHeap.push(nums[i]);
        }

        for(int j =0; j < k-1; j++){
            maxHeap.pop();
        }

        return maxHeap.top();

        
    }
};
