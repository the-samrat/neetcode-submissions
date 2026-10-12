class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        vector<int> pref{1};
        vector<int> suff(nums.size());
        int prod_p = 1, prod_s = 1;
        suff[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            prod_p*=nums[i-1];
            pref.push_back(prod_p);
        }
        for(int i=nums.size()-1;i>0;i--){
            prod_s*=nums[i];
            suff[i-1]=prod_s;
        }
        for(int i=0;i<nums.size();i++){
            result.push_back(pref[i]*suff[i]);
        }
        return result;
    }
};
