class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        


        for(int i {}; i < matrix.size(); i++){
        
        int left  = 0;

        int  right = matrix[i].size()-1;

        while(left <= right){
            
            int mid = left+(right-left)/2; // 0

            if(matrix[i][mid] == target) return true; 
                
            if(matrix[i][mid] < target) left = mid+1; //1
            else right = mid-1;
        
             cout<< left<< " " << right<<endl;
            }
        }

        return false;
    
    }
};
