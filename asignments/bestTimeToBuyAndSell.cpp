#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int diff = 0;
    int price = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        price = min(price, prices[i]);
        diff = max(diff, prices[i] - price);
    }
    return diff;
}
int main(){
    vector<int> arr = {7, 6, 4, 3, 1 };
    cout<<maxProfit(arr);
}