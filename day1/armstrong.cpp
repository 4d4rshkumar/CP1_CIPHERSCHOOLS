#include <bits/stdc++.h>
using namespace std;
int len(int num){
    int acc=0;
    while(num!=0){
        num=num/10;
        acc++;
    }
    return acc;
}
int main(){
    int a,acc=0;
    cin>>a;
    int p=len(a);
    while (a){
        acc+=pow(a%10,p);
        a=a/10;
    }
    cout<<acc<<endl;
}