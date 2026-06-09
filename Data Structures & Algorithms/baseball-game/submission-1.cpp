
class Solution {

public:
    int calPoints(vector<string>& operations) {

        if(operations.empty()) return 0;

            int sum = 0;
            stack<int> stk;

            for(int i {}; i < operations.size(); ++i){

                if(operations[i]== "+"){
                    int temp = stk.top();
                    stk.pop();
                    int add = temp+stk.top();
                    stk.push(temp);
                    stk.push(add);
                    sum +=add;
                }
                else if(operations[i] == "D"){
                        stk.push(stk.top()*2);
                        sum +=stk.top();
                    }
                else if(operations[i] == "C"){
                        sum -= stk.top();
                        stk.pop();
                }
                else{
                    stk.push(stoi(operations[i]));
                    sum+=stk.top();
                }

            }

            return sum;
        
    }
};