class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
       int x=1,y=2,z=0;
       for(int i=3;i<=n;i++)
       {
        z=x+y;
        x=y;
        y=z;
       }
        return z;
    }
};