class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        /** 
        In order to get the container with most water we need to maximize the largest area.
        Area depends on two varibles hight and width. Area = hight * width.
        However on thing to note is that the container is made up of two bars. 
        Therfore, the container hight is depent on the smallet bar because otherwise the water will overflow.
         So the question come down to how to maximize both hight and width where hight is the min between the two edge bars.
         */

        /**
         One approuch we start with the largest width index (0, N-1) and then compare both hight
         bars the smallest bar will the hight will use the height to Calculate the area with the wdith.
         Then whichever the smallest height bar to next bar either left or right.
        */

        int largestConArea = INT_MIN; // store the largest area
        
        // we start with largest width (right - left)
        int left = 0;
        int right = heights.size()-1;


        // Might not sure if this makes sense since the higth are not sorted
        while(left < right){
        
        // check wich bar is larger
         if(heights[left] > heights[right]){
           // if left side bar is larger we calacute the area of the right bar to avoid overflow
            largestConArea = max(largestConArea, heights[right]* (right-left));
            right--;  // we move to next bar to inword to maximize the hight but this decarases the widith
         }
         else{ // height[right] is larger
            largestConArea = max(largestConArea, heights[left]* (right-left));
            left++; // we need to move the next bar to 
         }

        }
        
        return largestConArea;
    }
};
