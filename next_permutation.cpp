#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),x=-1,s;
        for(int i=n-1;i>0;i--)
        if(nums[i]>nums[i-1]){
            x=i-1;
            break;
        }//end of if block
        if(x==-1){
            reverse(nums.begin(),nums.end());
            return;
        }//end of if block
        s=x+1;
        for(int i=x+1;i<n;i++)
        if(nums[i]<=nums[s] && nums[i]>nums[x])
        s=i;
        swap(nums[x],nums[s]);
        reverse(nums.begin()+x+1,nums.end());
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
    cout<<"Enter the initial permutation order: ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    cout<<"The initial permutation order is as follows: ";
    Solution* obj=new Solution();
    obj->display_1darr(nums);
    obj->nextPermutation(nums);
    cout<<"The next permutation order is as follows: ";
    obj->display_1darr(nums);        
}//end of main