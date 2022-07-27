class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> m;
        for (string s: strs){
            
            string key = s;
            sort(key.begin(), key.end());
            m[key].push_back(s);
            
            
        }
        
        vector<vector<string>> result;
        for(auto p:m){
            result.push_back(p.second);
        }
        return result;
        
    }
};