class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int r=0;r<n;r++)
        {
            for(int c=r;c<n;c++)
            {
                swap(matrix[r][c],matrix[c][r]);
            }
        }
        for(int r=0;r<n;r++)
        { int left=0, right=n-1;
            while(left<right)
            {
                swap(matrix[r][left],matrix[r][right]);
                left++;right--;
            }
        }
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                cout << matrix[r][c] << " ";
            }
            cout << endl;
        }
    }
};