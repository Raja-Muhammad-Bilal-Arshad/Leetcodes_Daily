class Solution {
public:
    int lengthOfLastWord(string s) {
        int a=0,temp=0;
        for(int i=0;i<s.length();i++)
        { 
            if(s[i]!=' ')
            {
                a++; temp=a;
            }
            else
            a=0;
        }
        return temp;
        
    }
};