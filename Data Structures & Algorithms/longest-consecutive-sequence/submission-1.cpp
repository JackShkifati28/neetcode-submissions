class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        int count =1;
        int largest =0;

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(const int num : nums){
            minHeap.push(num);
        }

        int smallest = minHeap.top(); // -1
        minHeap.pop(); 
        
        while(!minHeap.empty()){
            int x = minHeap.top(); // -1, 0, 1, 3
            minHeap.pop();

            if(x == smallest) continue;

            cout<<x<<endl;

            if(smallest +1 == x) count++;       //2,3,  
            else {
                if(count > largest) largest = count;
                count =1;
            }
            
            smallest = x;   //-1, 0, 1, 3       

        }
         
        return (largest > count) ? largest : count;


        
    }
};
