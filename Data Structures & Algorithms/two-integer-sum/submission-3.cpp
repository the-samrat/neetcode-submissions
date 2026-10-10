class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int d = target - nums[i];
            if(m.count(d)&&m[d]!=i){
                v.push_back(i); v.push_back(m[d]);
                return v;
            }
        }
        return {};
    }
};
