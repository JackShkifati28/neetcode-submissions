class Solution {
public:
   int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;

    int left = 0, largest = 0;
    
    for (int right = 0; right < s.length(); right++) {
        while (window.count(s[right])) {
            window.erase(s[left++]);
        }
        window.insert(s[right]);
        largest = max(largest, right - left + 1);
    }
    return largest;
}
};
