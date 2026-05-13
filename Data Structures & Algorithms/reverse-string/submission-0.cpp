class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();

        for(int i =0; i < n/2; ++i){
            char p = s[(n-1)-i];
            char p2 = s[i];
            s[i]=p;
            s[(n-1)-i]=p2;
        }
        
    }
};