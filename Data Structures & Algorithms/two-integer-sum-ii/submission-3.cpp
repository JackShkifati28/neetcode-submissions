class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left =0;

        int right = numbers.size()-1;


        while(left < right){

            if(numbers[left]+numbers[right] > INT_MAX || numbers[left]+numbers[right] < INT_MIN){
                cout << "Overflow or Underflow error"<<endl;
                break;
            }

            int sum = numbers[left]+numbers[right];

            if( sum == target) return {left+1, right+1};

            else if(sum < target) left++;

            else right--;
         
        }


        return {};
        
    }
};
