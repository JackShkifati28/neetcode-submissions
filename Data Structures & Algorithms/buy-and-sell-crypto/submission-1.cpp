class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int largest = 0;
        int left = 0;
        int right = 1;

       
        while(right < prices.size()){
            if(prices[left] < prices[right]){
            int diff = prices[right]-prices[left];
            if(diff > largest) largest = diff;
        }else {
            left = right;
        }
            right++;
        }
        return largest;
    }
};
