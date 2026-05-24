class Solution {
public:
    bool isPalindrome(string s) {

       

        std::regex pattern(R"([?,!.':\s]+)");
       s = std::regex_replace(s, pattern, "");

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return tolower(c);
        });

        int left = 0;
        int right = s.length()-1;

        
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
