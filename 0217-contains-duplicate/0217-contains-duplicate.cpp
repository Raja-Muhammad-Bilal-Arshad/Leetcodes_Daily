class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // Set to track elements we've seen

        for (int num : nums) {
            // If the element is already in the set, return true (duplicate found)
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Otherwise, insert the element into the set
            seen.insert(num);
        }

        // No duplicates found
        return false;
    }
};