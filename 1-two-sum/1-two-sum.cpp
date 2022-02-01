class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
      
    {   vector<int> arr(2);
        map<int,int> hashMap;
        for(int i=0;i<nums.size();i++){
            hashMap[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            if(hashMap[target-nums[i]] && (hashMap[target-nums[i]])!=i){
                arr[0]=i;
                arr[1]=hashMap[target-nums[i]];
            }
        }
        return arr;
    }  
};