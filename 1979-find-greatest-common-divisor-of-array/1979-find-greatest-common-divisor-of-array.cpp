class Solution {
public:
    int findGCD(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int min = nums[0];
       int max = nums[nums.size()-1];
       int ans=1;
       for(int i=1; i<=min; i++)
       {
           if(max%i==0 && min%i==0)
                if(i>ans)
                    ans = i;
       } 

       return ans;
    }
};