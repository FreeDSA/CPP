class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            res[nums[i]]++;
        }
        vector<int>ans;
        for(auto i:res)
        {
            if(i.second==2)
                ans.push_back(i.first);
        }
        return ans;
    }
};
