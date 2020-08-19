#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> s1,s2;
    vector<int> ans;
    for (int i = 0; i < nums2.size(); ++i)
        s1.push(nums2[i]);

    for (int i = 0; i < nums1.size(); ++i)
    {
        int x = s1.top();
        int res = -1;

        while (x != nums1[i])
        {
            s2.push(s1.top());
            s1.pop();
            if (s2.top() > nums1[i])
            {
                res = s2.top();
            }
            x = s1.top();
        }
        ans.push_back(res);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    return ans;
}
int main(){
    vector<int> nums1= {4,1,2}, nums2 = {1,3,4,2};
    vector<int> res=nextGreaterElement(nums1,nums2);
    for(auto x:res){
        cout<<x<<" ";
    }


}