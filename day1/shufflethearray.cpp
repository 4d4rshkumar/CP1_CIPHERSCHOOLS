#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> v;
    for (int i = 0; i < (nums.size() - n); i++)
    {
        v.push_back(nums[i]);
        v.push_back(nums[i + n]);
    }

    return v;
}
int main(){
vector<int> v={1,2,3,4,4,3,2,1};
int n=4;
shuffle(v,n);
for (auto x:v){
    cout<<x<<" ";
}
}