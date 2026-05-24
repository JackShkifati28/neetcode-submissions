class Solution {
public:
    bool checkInclusion(string s1, string s2) {

          int k = s1.length();
    if (k > s2.length()) return false;

    unordered_map<char,int> count, count2;
    for (int i = 0; i < k; i++) {
        count[s1[i]]++;
        count2[s2[i]]++;
    }
    if (count == count2) return true;

    for (int right = k; right < s2.length(); right++) {
        count2[s2[right]]++;              // add new right char
        if (--count2[s2[right - k]] == 0) // remove old left char
            count2.erase(s2[right - k]);
        if (count == count2) return true;
    }
    return false;
        
        
    }
};
