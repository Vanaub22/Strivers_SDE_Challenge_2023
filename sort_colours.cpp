#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using counting sort approach
        int zeroes=0,ones=0,twos=0,i=0;
        for(int i:nums)
        if(i==0)
        zeroes++;
        else if(i==1)
        ones++;
        else
        twos++;
        while(--zeroes>=0)
        nums[i++]=0;
        while(--ones>=0)
        nums[i++]=1;
        while(--twos>=0)
        nums[i++]=2;
    }//end of fn.
    void display_1darr(vector<int>& arr){
        for(int i:arr)
        cout<<i<<" ";
        cout<<endl;
    }//end of fn.
};//end of class
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements of the array (0's, 1's and 2's only): ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    cout<<"The elements of the array before sorting are as follows: ";
    Solution* obj=new Solution();
    obj->display_1darr(nums);
    obj->sortColors(nums);
    cout<<"The elements of the resultant array after sorting are as follows: ";
    obj->display_1darr(nums);        
}//end of main