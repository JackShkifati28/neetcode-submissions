class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> stk;  // 4, 2 
       

        for( size_t i {}; i < tokens.size(); ++i){
           
            if(tokens[i]=="+"){
                int temp = stk.top(); // 2
                stk.pop();
                int total = temp+stk.top(); // 6
                stk.pop();
                // stk.push(temp);
                stk.push(total);
            }
            else if(tokens[i]=="-"){
                int temp = stk.top();
                stk.pop();
                int total = stk.top()-temp;
                // stk.push(temp);
                 stk.pop();
                stk.push(total);
            }
            else if(tokens[i]== "*"){
                 int temp = stk.top();
                stk.pop();
                int total = temp * stk.top();
                // stk.push(temp);
                 stk.pop();
                stk.push(total);

            }
            else if(tokens[i]=="/"){
                int temp = stk.top();   // 5
                stk.pop(); 
                
                int total =  stk.top()/ temp; // 5 / 13 = 2
                // stk.push(temp);  
                 stk.pop(); 
                stk.push(total); // 2
               
            }
            else{
                stk.push(stoi(tokens[i])); // 4 , 13, 5 
            }
        }
        return stk.top();
    }
};
