#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,4},b[]={3,4,5};
    int l1 = (sizeof(a) / sizeof(a[0])), l2 = (sizeof(b) / sizeof(b[0])),s1=0,s2=0;
    for (auto x:a){
        s1=s1+(x*pow(10,l1-1));
        l1--;
    }
    for (auto x : b)
    {
        s2 += (x * pow(10, l2-1));
        l2--;
    }
    cout<<s1+s2;
}