class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        int n = nums1.size();
        int m = nums2.size();
        
        int left = 0, right = n; // Binary search range for nums1
        
        while (left <= right) {
            int partition1 = (left + right) / 2;
            int partition2 = (n + m + 1) / 2 - partition1; // Partition nums2
            
            // Left and right values for both arrays (handling edge cases)
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == n) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == m) ? INT_MAX : nums2[partition2];
            
            // Check if we have found the correct partition
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // Odd total length: median is the max of the left elements
                if ((n + m) % 2 != 0) {
                    return max(maxLeft1, maxLeft2);
                } else { // Even total length: median is the average of the two middle elements
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
            } else if (maxLeft1 > minRight2) {
                // Move partition1 to the left
                right = partition1 - 1;
            } else {
                // Move partition1 to the right
                left = partition1 + 1;
            }
        }

        return 0.0; // Should never reach here if inputs are valid
    }
};
