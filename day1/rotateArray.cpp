#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int temp;
    for (int i = 0; i < k; i++)
    {
        temp = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(), temp);
    }
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cin>>k;
    rotate(v,k);
    for(auto x:v){
        cout<<x<<"  ";
    }

}