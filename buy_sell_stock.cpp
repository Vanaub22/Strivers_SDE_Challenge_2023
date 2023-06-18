#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX,maxProf=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxProf=max(maxProf,prices[i]-minPrice);
        }//end of for loop
        return(maxProf);
    }//end of fn.
    void display_1darr(vector<int>& arr){
        for(int i:arr)
        cout<<i<<" ";
        cout<<endl;
    }//end of fn.
};//end of class
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the prices on each day: ";
    for(int i=0;i<n;i++)
    cin>>prices[i];
    cout<<"The prices on each day are as follows: ";
    Solution* obj=new Solution();
    obj->display_1darr(prices);
    cout<<"The maximum profit that can be obtained from buying and selling stocks in given interval is: "<<obj->maxProfit(prices)<<endl;  
    return(0);
}//end of main