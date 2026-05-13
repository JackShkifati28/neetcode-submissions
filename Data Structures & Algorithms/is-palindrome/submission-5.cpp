#include <regex>

class Solution {
public:
    bool isPalindrome(string s) {

          std::regex pattern(R"([?.,' :;/\{}])");
          s=std::regex_replace(s, pattern, "");

          cout<<s<<endl;

        unsigned int n= s.length();
        

        
        int index = n-1;

        for(int i =0; i < n/2; i++){
            char p1 = std::tolower(s[i]);
            char p2 = std::tolower(s[index -i]);

            cout<<p1 << " " << p2<<endl;

            if(p1 != p2){
                return false;
            }
        }
        return true;
    }
};
