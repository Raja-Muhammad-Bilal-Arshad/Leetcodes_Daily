class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;  // To store unique elements
        
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;  // Duplicate found
            }
            seen.insert(num);  // Insert the number into the set
        }
        
        return false;  // No duplicates found
    }
};