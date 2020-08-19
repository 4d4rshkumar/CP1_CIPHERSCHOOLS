#include<bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> op;
        int acc;
        for(auto x:nums){
            acc=0;
            for(auto y:nums){
                if (x>y){
                    acc++;
                }
            }
            op.push_back(acc);
        }
        return op;
     
    }
    int main(){
        vector<int> v = { 8, 1, 2, 2, 3 };
        v=smallerNumbersThanCurrent(v);
        for(auto x:v){
            cout<<x<<" ";
        }
    }