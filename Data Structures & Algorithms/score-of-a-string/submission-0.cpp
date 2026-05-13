class Solution {
public:
    int scoreOfString(string s) {
        int sum =0;
        int n = s.length();

        for(int i =0; i < n-1; i++){
            sum+=std::abs(s[i]-s[i+1]);
           std::cout<<sum<<endl;
        }

        return sum;
        
    }
};