#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int> &A)
{
    vector<int> v;
    for (auto x : A)
    {
        v.push_back(pow(x, 2));
    }
    sort(v.begin(), v.end());
    return v;
}
int main(){
    vector<int> v = {4, -1, 0, 3, 10 };
    v=sortedSquares(v);
    for (auto x : v)
    {
        cout << x << " ";
    }
}