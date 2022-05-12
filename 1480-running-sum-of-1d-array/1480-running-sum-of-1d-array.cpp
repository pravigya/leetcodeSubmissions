class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v = {nums[0]};
        int n=nums.size();
        for(int i=1;i<n;i++){
            v.push_back(v.back()+nums[i]);
        }
        return v;
    }
};