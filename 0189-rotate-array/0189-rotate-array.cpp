class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        vector<int> array(n);
        k=k%n;
        for(int i=0;i<n;i++)
        {
            array[(i+k)%n]=nums[i];
        }
    for (int i = 0; i < n; i++) {
            nums[i] = array[i];
        }
    }
};