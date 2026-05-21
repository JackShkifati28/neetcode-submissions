class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        vector<string> temp;
        unordered_map<string,vector<int>> frqStr;

        for(string s: strs){ 
            temp.push_back(s);
        }

        for(int i {}; i < temp.size(); ++i){
            sort(temp[i].begin(), temp[i].end());
            frqStr[temp[i]].push_back(i);
        }
       
        for(auto [key,values]: frqStr){
           vector<string> group;
            for(int index: values){
               group.push_back(strs[index]);
            }

            res.push_back(group);
            
        }

        return res;

        
        
    }
};
