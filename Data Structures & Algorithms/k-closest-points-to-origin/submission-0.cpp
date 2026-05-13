class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      
        // Step 1: choose the Data structures 
        vector<vector<int>> res;     // stores the K closest points
        priority_queue<pair<double,int>> maxHeap; // max-heap
        
        
       for (int i =0; i < points.size(); ++i){

        int x = points[i][0];
        int y = points[i][1];
        
        // Step 2: calculate the distances from the orgin for each coordinates
        double distance = sqrt((x*x) + (y*y));
        
        // step 3: We need a max-heap that stores largest distance of the closet distance at the root
         maxHeap.push({distance, i});
         if(maxHeap.size() > k) maxHeap.pop(); // always removing the next largest distance so we can always have K-closet distances
       }

       //Step 5: Return vector with closest distances
       while(!maxHeap.empty()){
        auto [top , i] = maxHeap.top();
        maxHeap.pop();
        res.push_back(points[i]);
       }


      return res;

        
    }
};
