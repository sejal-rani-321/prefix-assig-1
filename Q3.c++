
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> ans;
       long long mx = 0, convert = 0, sum = 0;
        
        for(int i = 0; i<nums.size();i++){
            mx = max(mx,(long long)nums[i]);
            convert = nums[i] + mx;
            sum = sum + convert;
            ans.push_back(sum);
        }
        return ans;
    }