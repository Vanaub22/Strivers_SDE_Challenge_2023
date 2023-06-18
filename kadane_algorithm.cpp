#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Kadane's Algorithm
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxSum=INT_MIN;
        for(int i:nums){
            sum+=i;
            maxSum=max(maxSum,sum);
            sum=(sum>0?sum:0);            
        }//end of for loop
        return(maxSum);
    }//end of fn.
    void display_1darr(vector<int>& arr){
        for(int i:arr)
        cout<<i<<" ";
        cout<<endl;
    }//end of fn.
};//end of class
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    cout<<"The array is as follows: ";
    Solution* obj=new Solution();
    obj->display_1darr(nums);
    cout<<"The maximum sum obtained from a subarray is: "<<obj->maxSubArray(nums)<<endl;       
}//end of main