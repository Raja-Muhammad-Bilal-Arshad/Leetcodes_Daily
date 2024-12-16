class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merge the two arrays into one
        vector<int> result(nums1.begin(), nums1.end());
        result.insert(result.end(), nums2.begin(), nums2.end());

        // Sort the merged array
        sort(result.begin(), result.end());

        // Calculate the median
        int n = result.size();
        if (n % 2 == 0) {
            // Even case: Average of the two middle elements
            return (result[n/2] + result[(n/2) - 1]) / 2.0;
        } else {
            // Odd case: Middle element
            return result[n/2];
        }
    }
};
