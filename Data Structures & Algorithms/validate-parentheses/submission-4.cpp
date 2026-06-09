class Solution {
public:
    bool isValid(string s) {

        if(s.length() == 1) return false;

        unordered_map<char,char>par = {{'{','}'}, {'[',']'}, {'(',')'}};

        stack<char> st; 

        for(char c: s){
            
         if(c == '{' || c == '['|| c=='('){ 
            st.push(c); 
         }
           
          else {
            
            if(st.empty()) return false;
            
            if(par[st.top()] != c)  return false;
            st.pop();
           }
        }


        return st.empty();
        
    }
};
