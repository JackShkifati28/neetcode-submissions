class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        unordered_map<int, int> fre;

        for(int num: nums){
            fre[num]++;
        }

        for(auto [key, value]: fre){
            minHeap.push({value,key});
            if(minHeap.size() > k) minHeap.pop();
        }

        vector<int> res;
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};
