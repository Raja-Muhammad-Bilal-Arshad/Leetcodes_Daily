//20. Valid Parentheses
/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true*/





#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=2,b=2,c=2,n;
    string s;
    cout<<"Enter your valid string: ";
    cin>>s;
    for(n=0;n<s.length();n++)
       {
        if(s[n]=='(')
        a++;
        else if(s[n]==')')
        a++;
        else if(s[n]==']')
        b++;
        else if(s[n]=='[')
        b++;
        else if(s[n]=='{')
        c++;
        else if(s[n]=='}')
        c++;
        }

        if(a%2==0 && b%2==0 && c%2==0)
        cout<<"input string is valid";
        else 
        cout<<"input string is invalid";
        

        
    }
