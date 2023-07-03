#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> nums; //not space-optimized, definitely not 'in-place'
       int index1=0,index2=0;
       while(index1<m && index2<n){
           if(nums1[index1]<nums2[index2])
           nums.push_back(nums1[index1++]);
           else
           nums.push_back(nums2[index2++]);
       }//end of while loop
       while(index1<m)
       nums.push_back(nums1[index1++]);
       while(index2<n)
       nums.push_back(nums2[index2++]);
       nums1=nums; 
    }//end of fn.
    void display_1darr(vector<int>& arr){
        for(int i:arr)
        cout<<i<<" ";
        cout<<endl;
    }//end of fn.
};
int main()
{
    int m,n;
    cout<<"Enter the number of elements in the first array and the second array (separated by spaces): ";
    cin>>m>>n;
    cout<<"Enter the elements in the first array (separated by spaces): ";
    vector<int> nums1,nums2;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        nums1.push_back(num);
    }//end of for loop
    cout<<"Enter the elements of the second array (separated by spaces): ";
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums2.push_back(num);
    }//end of for loop
    Solution* obj=new Solution();
    obj->merge(nums1,m,nums2,n);
    cout<<"The merged sorted array is as follows: ";
    obj->display_1darr(nums1);
    return 0;
}//end of main