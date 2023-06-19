#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateMatrix(vector<vector<int>>& mat,int m,int n){
        if(m==1||n==1)
        return;
        int top=0,bottom=m-1,left=0,right=n-1;
        while(top<bottom && left<right){
            int prev=mat[top+1][left];
            for(int i=left;i<=right;i++)
            swap(mat[top][i],prev);
            top++;
            for(int i=top;i<=bottom;i++)
            swap(mat[i][right],prev);
            right--;
            for(int i=right;i>=left;i--)
            swap(mat[bottom][i],prev);
            bottom--;
            for(int i=bottom;i>=top;i--)
            swap(mat[i][left],prev);
            left++;
        }
    }//end of fn.
    void display_2darr(vector<vector<int>>& arr){
        int m=arr.size(),n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
        }//end of outer for loop
    }//end of fn.
};//end of class
int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns in the matrix: ";
    cin>>m>>n;
    cout<<"Enter the elements of the matrix:"<<endl;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>matrix[i][j];
    Solution* obj=new Solution();
    cout<<"The user-input matrix is as follows:"<<endl;
    obj->display_2darr(matrix);
    obj->rotateMatrix(matrix,m,n);
    cout<<"The matrix after rotating clockwise by one-place is as follows:"<<endl;
    obj->display_2darr(matrix);
    return(0);
}//end of main