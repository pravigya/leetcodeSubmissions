class Solution {
public:
    vector<vector<int>>allSubsets;

	void generate(vector<int>&subset, int i, vector<int>&nums){

		//base case

		if(i==nums.size()){
			allSubsets.push_back(subset);
			return;
		}
		
		//ith element not in subset

		generate(subset,i+1,nums);

		//in
		subset.push_back(nums[i]);
		generate(subset,i+1,nums);
		subset.pop_back();

	}
	 
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>empty;
        generate(empty,0,nums);
        return allSubsets;
        
    }

};