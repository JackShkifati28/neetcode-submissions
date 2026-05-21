class Solution {
public:

    string encode(vector<string>& strs) {
        

        string res = "";

        for(int i =0; i < strs.size(); ++i){
            res += to_string(strs[i].length())+"$"+strs[i];
        
        }

        return res;

    }

    vector<string> decode(string s) {

        vector<string> res;
            size_t i =0;
          while(i < s.length()){
            size_t p = s.find("$", i);
           
            int len = stoi(s.substr(i,p-i));
            
            i = p+1;

            res.push_back(s.substr(i, len));

            i +=len;
        }
        return res;
    }
};
