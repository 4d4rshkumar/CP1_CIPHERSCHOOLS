#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    vector<int> v;
    int acc = 0;
    for (auto x : nums)
    {
        if (x == 0)
        {
            acc++;
        }
        else
        {
            v.push_back(x);
        }
    }

    for (int i = 0; i < acc; i++)
    {
        v.push_back(0);
    }
    nums = v;
}
int main(){
    vector<int> nums={1,0,2,0,3,4,6};
    moveZeroes(nums);
    for (auto x:nums){
        cout<<x<<" ";
    }

}   