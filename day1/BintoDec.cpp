#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int acc=0,res=0,i=0;
    i=(s.size())-1;
    for(char x:s){
        if(x=='1'){
            res+=pow(2,i);
            i--;
        }
        else{
            i--;
        }
    }
    cout<<res;
}