#include<bits/stdc++.h>
using namespace std;
/* logic- 
1- we take global minimum and a maxprofit=0 
2- we check which minimun in the array to buy the stock
3- after what day we should sell the stock when the prices will be higher
4- so we then check maximum of the variable we make profit to check the prices daily
5- we take the maximun of the profit and maxprofit
for eg- 7 1 5 3 6 4
        minimumsofar = 7,1,1,1,1,1
        prices= 0,0,4,2,5,3
        maxprofit= 0,0,4,4,5,5*/
int maxProfit(vector<int> &prices)
{
    int minsofar = INT_MAX;
    int maxprofit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minsofar = min(minsofar, prices[i]);
        int profit = prices[i] - minsofar;
        maxprofit = max(profit, maxprofit);
    }
    return maxprofit;
}
int main(){
    vector<int> v={7,1,5,3,6,4};
    cout<<maxProfit(v);
    return 0;
}
// 7,1,5,3,6,4
// output-
// 5