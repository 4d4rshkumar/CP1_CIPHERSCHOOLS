#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    int sz = nums.size();
    vector<int> op;
    for (int i = 0; i <= (sz - k); i++)
    {
        op.push_back(*max_element(nums.begin() + i, nums.begin() + i + k));
    }
    return op;
}
int main(){
    vector<int> v = { 1, 3, -1, -3, 5, 3, 6, 7 };
    int k=3;
    vector<int> res=maxSlidingWindow(v,k);
    for(auto x:res){
        cout<<x<<" ";
    }
}