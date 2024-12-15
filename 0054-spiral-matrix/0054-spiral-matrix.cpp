class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int a=0;
        int n=matrix[0].size();
        vector<int> array;
        array.reserve(m * n);      

       int left=0,right=n-1,top=0,bottom=m-1;

       while(left<=right && top<=bottom)
       {
        for(int c=left;c<=right;c++)
        array.push_back(matrix[top][c]);
        top++;
        for(int r=top;r<=bottom;r++)
        array.push_back(matrix[r][right]);
        right--;
        if(top<=bottom)
        {
            for(int c=right;c>=left;c--)
            array.push_back(matrix[bottom][c]);
            bottom--;}
        if(left<=right)
        {
            for(int r=bottom;r>=top;r--)
            array.push_back(matrix[r][left]);
            left++;
        }
       }

      return array;
        
    }
};