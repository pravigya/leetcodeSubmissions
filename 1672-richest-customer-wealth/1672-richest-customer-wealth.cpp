class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealthCounter=0;
        int m= accounts[0].size();
        int n= accounts.size();
        
        for(int i=0;i<n;i++){
            int currWealth =0;
            for(int j=0;j<m;j++){
                 currWealth+= accounts[i][j];
                maxWealthCounter = max(maxWealthCounter,currWealth);
            }
        }
        return maxWealthCounter;
    }
};