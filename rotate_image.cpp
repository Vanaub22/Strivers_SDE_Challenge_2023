#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //using the transpose-reflect approach
    void rotate(vector<vector<int>>& matrix){
        int m=matrix.size(),n=matrix[0].size();
        if(m!=n)
        return;
        for(int i=0;i<m;i++)
        for(int j=i+1;j<n;j++)
        swap(matrix[i][j],matrix[j][i]);
        cout<<"Transpose: \n";
        display_2darr(matrix);
        cout<<"reflecting: \n";
        for(int i=0;i<m;i++)
        reverse(matrix[i].begin(),matrix[i].end());
        display_2darr(matrix);
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
    obj->rotate(matrix);
    cout<<"The matrix after rotating clockwise is as follows:"<<endl;
    obj->display_2darr(matrix);
    return(0);
}//end of main