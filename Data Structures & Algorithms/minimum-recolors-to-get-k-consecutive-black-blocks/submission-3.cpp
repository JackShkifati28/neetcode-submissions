class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int minOp = INT_MAX;
        int left{}, right{};
        unordered_map<char,int> count;


        for(; right < blocks.length(); right++){
           
            
            count[blocks[right]]++; 
            
            if(right - left +1 == k){
                minOp = min(minOp, count['W']);
                if(blocks[left] == 'W') count['W']--;
               left++;
            }

        }


    //    if( k >= blocks.length()) minOp = count['W'];
        return minOp;
        
    }
};