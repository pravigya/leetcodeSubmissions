class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        //Max heap, pop 2 biggest, push back difference until no more 2 elements left

    //Time: O(n log n)
    //Space: O(n)
        
        priority_queue<int>pq;
        for (int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }
        
        while(pq.size()>1){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(y>x){
                pq.push(y-x);
            }
        }
        
        if (pq.empty()) {
            return 0;
        }
        
        return pq.top();
        
    }
};