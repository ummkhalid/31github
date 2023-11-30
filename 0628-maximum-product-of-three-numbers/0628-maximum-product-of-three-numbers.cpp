class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         int s1, s2;
        sort(nums.begin(), nums.end());
        s1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        s2 = nums[nums.size()-1]*nums[0]*nums[1];
        return max(s1, s2);
    }
};