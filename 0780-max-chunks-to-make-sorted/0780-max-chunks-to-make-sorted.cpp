class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxLeft = 0, chunks = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            maxLeft = max(maxLeft, arr[i]);
            if (maxLeft == i) {
                chunks++;
            }
        }
        
        return chunks;
    }
};
