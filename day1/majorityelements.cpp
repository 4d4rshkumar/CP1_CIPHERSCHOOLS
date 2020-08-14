#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int c = nums.size() / 2;

    for (int num : nums)
    {
        int count = 0;
        for (int elem : nums)
        {
            if (elem == num)
            {
                count += 1;
            }
        }

        if (count > c)
        {
            return num;
        }
    }
    return -1;
}
int main(){
    vector<int> v={2,2,1,1,1,2,2};
    int a=majorityElement(v);
    cout<<a;



}