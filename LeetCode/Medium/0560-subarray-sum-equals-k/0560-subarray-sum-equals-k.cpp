class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int psum = 0, ans = 0;
        map<int, int> mp;
        mp[0]++;
        for (auto x : nums) {
            psum += x;
            ans += mp[psum - k];
            mp[psum]++;
        }
        return ans;
    }
};