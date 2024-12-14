class Solution {
public:
    string reverseVowels(string s) {
        string vowel;
        vector<int> index;


        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='i' || s[i]=='I'|| s[i]=='a'|| s[i]=='A'|| s[i]=='E'|| s[i]=='e'|| s[i]=='O'|| s[i]=='o'|| s[i]=='U'|| s[i]=='u')
            {
                vowel.push_back(s[i]);
                index.push_back(i);
            }
        }
            int i=0;
            for(int j=vowel.length()-1;j>=0;j--)
            {
                s[index[i++]]=vowel[j];
            }
        return s;
    }
};