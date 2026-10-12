class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(auto num : nums){
            m[num]++;
        }
        vector<vector<int>> v(nums.size()+1);
        for(auto k : m){
            v[k.second].push_back(k.first);
        }
        vector<int> res;
        for(int i=nums.size();i>0&&res.size()<k;i--){
            for(int num:v[i]){
                res.push_back(num);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return {};
    }
};
