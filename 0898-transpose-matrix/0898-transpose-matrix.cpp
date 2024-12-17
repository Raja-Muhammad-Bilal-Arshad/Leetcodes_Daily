class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();
       vector<vector<int>> Transpos(col,vector<int>(rows));
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                Transpos[j][i]=(matrix[i][j]);
            }
        }
        return Transpos;
    }

};