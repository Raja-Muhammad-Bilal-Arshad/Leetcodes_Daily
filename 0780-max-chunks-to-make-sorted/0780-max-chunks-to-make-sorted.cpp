class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_seen=0,chunk=0;
        for(int i=0;i<arr.size();i++)
        {
            if(max_seen<arr[i])
            max_seen=arr[i];

            if(max_seen<=i)
            chunk++;
        }
        return chunk;
    }
};