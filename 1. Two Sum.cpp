//PROBLEM NUMBER 1
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/

#include<iostream>
using namespace std;
int main ()
{
    int a,i,j,target;
    cout<<"Enter the number of Array: ";
    cin>>a;
    int nums[a];
    cout<<"nums= ";
     cin>>nums[0];
     
    for(int i=1;i<a;i++)
 {
      cin>>nums[i];
 }
 cout<<"target= ";
     cin>>target;
 for(i=0;i<=a;i++)
 {
    for(j=0;j<=a;j++)
    {
        if(nums[i]+nums[j]==target)
        {
            cout<<i<<" "<<j;
            return 1;
        }     
    }
 }
}
