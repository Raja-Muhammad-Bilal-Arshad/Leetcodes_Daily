class Solution {
public:
    int maxArea(vector<int>& height) {
        int MAXAREA=0,CURRENTAREA=0,CurrentHeight;
        int left=0,right=height.size()-1;
        while(left<right){
            CurrentHeight=(height[left]>height[right])? height[right]:height[left];
            CURRENTAREA=CurrentHeight*(right-left);


            if(CURRENTAREA>MAXAREA)
            MAXAREA=CURRENTAREA;



            if(height[left]<height[right])
            left++;
            else
            right--;


        }
return MAXAREA; 
    }
};