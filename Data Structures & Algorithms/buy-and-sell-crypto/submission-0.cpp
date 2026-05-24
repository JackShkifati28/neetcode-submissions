class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int largest = 0;

        for(int i {}; i < prices.size()-1; ++i){
            int left = i;
            int right = i+1;
            while(right < prices.size()){
            int diff = prices[right]-prices[left];
            if(diff > largest) largest = diff;
             right++;
            }
        }
        return largest;
    }
};
