#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2, 7, 11, 15};
    vector<int> op(2);
    int target=9;


    map<int,int> :: iterator itr;
    map<int,int>m;
    for(int i=0;i<v.size();i++){
    m.insert(make_pair(v[i],i));}
    for (int i = 0; i < v.size(); i++){
        itr=m.find(target-v[i]);
        if (itr!=m.end()){
            op[1]=i;
            op[0]=itr->second;
        }
    }
    for(auto x:op){
        cout<<x<<" ";
    }
}