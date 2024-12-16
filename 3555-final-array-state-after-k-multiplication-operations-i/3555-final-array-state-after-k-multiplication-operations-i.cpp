class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int MIN,n=nums.size();
        int index;
        for(int i=0;i<k;i++)
        {
            MIN=nums[0];index=0;
            for(int i=0;i<n;i++)
            {
                if(MIN>nums[i])
                {
                    MIN=nums[i];
                    index=i;
                }
            }
            nums[index]=MIN*multiplier;
        }
        return nums;
    }
};