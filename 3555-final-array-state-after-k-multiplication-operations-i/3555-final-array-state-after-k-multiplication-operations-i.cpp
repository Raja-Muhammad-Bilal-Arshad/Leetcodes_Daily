class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int MIN,n=nums.size();
        int index;
        for(int i=0;i<k;i++)
        {
            MIN=nums[0];index=0;
            for(int j=0;j<n;j++)
            {
                if(MIN>nums[j])
                {
                    MIN=nums[j];
                    index=j;
                }
            }
            nums[index]=MIN*multiplier;
        }
        return nums;
    }
};