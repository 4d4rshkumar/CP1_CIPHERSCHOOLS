#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0, smax = INT_MIN;
    for (int num : nums)
    {
        sum += num;
        smax = max(smax, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return smax;
}
int main(){
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxSubArray(v);
}