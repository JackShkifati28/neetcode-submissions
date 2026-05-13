class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        if(stones.size()== 0) return 0;

        priority_queue<int> pq;

        for(int stone: stones ){
            pq.push(stone);
        }

        // PQ: <6,4,3,2,2>

          while(pq.size() > 1){

            int x = pq.top(); // 6 , 3 , 2
            pq.pop();  // <4,3,2,2> , <2,2,2> , <2,1>
            int y = pq.top(); // 4 , 2, 2
            pq.pop(); // <3,2,2> , <2,2> <1>

            if(x==y){
               continue;
            }
            else if(x <  y ){
                int t = y-x;
               pq.push(t); 
            }else{
                int t = x-y;
                pq.push(t); // <3,2,2,2>. < 2, 2,1>
            }
            
          }
        
         if(pq.empty()) return 0;

        return pq.top();


    }
};
