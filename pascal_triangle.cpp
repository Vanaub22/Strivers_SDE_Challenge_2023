#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<long long int>> printPascal(int n){
        vector<vector<long long int>> pascalTriangle;
        pascalTriangle.push_back({1});
        if(n==1)
        return(pascalTriangle);
        pascalTriangle.push_back({1,1});
        if(n==2)
        return(pascalTriangle);
        for(int i=2;i<n;i++){
            vector<long long int> pascalRow(i+1);
            for(int j=0;j<=i;j++)
            if(j==0||j==i)
            pascalRow[j]=1;
            else
            pascalRow[j]=pascalTriangle[i-1][j-1]+pascalTriangle[i-1][j];
            pascalTriangle.push_back(pascalRow);
        }//end of for loop
        return(pascalTriangle);
    }//end of fn.
    void display_2darr(vector<vector<long long int>>& arr){
        int m=arr.size();
        for(int i=0;i<m;i++){
            int n=arr[i].size();
            for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
        }//end of outer for loop
    }//end of fn.
};//end of class
int main(){
    int n;
    cout<<"Enter the number of rows for the Pascal's Triangle: ";
    cin>>n;
    Solution* obj=new Solution();
    vector<vector<long long int>> pascalTriangle=obj->printPascal(n);
    cout<<"The Pascal's Triangle is as follows:"<<endl;
    obj->display_2darr(pascalTriangle);
    return 0;
}//end of main