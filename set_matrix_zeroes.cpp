#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows,columns;
        for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix[0].size();j++)
        if(matrix[i][j]==0){
            rows.insert(i);
            columns.insert(j);
        }//end of if block
        for(int i=0;i<matrix.size();i++)
        for(int j=0;j<matrix[0].size();j++)
        if(rows.find(i)!=rows.end()||columns.find(j)!=columns.end())
        matrix[i][j]=0;
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
int main(){
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
        obj->setZeroes(matrix);
        cout<<"The matrix after performing the operations is as follows:"<<endl;
        obj->display_2darr(matrix);
        return(0);
}//end of main
