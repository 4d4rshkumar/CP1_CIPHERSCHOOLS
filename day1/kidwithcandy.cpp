#include<bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int max = *max_element(candies.begin(), candies.end());
    vector<bool> op;
    for (auto x : candies)
    {
        if ((x + extraCandies) >= max)
        {
            op.push_back(true);
        }
        else
        {
            op.push_back(false);
        }
    }
    return op;
}
int main(){
    vector<int> v = {2, 3, 5, 1, 3};
    int extra=3;
    vector<bool> b=kidsWithCandies(v,extra);
    for(auto x:b){
        cout<<x<<" ";
    }

}