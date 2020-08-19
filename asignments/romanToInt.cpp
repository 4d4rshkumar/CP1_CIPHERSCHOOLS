#include<bits/stdc++.h>
using namespace std;
int roman(const char a)
{
    if (a == 'I')
        return 1;
    if (a == 'V')
        return 5;
    if (a == 'X')
        return 10;
    if (a == 'L')
        return 50;
    if (a == 'C')
        return 100;
    if (a == 'D')
        return 500;
    if (a == 'M')
        return 1000;

    return 0;
}
int romanToInt(string s)
{
    int res = 0;
    int sz = s.size();

    for (int i = 0; i < sz; i++)
    {
        if (i < (sz - 1) &&
            roman(s[i]) < roman(s[i + 1]))
        {
            res -= roman(s[i]);
        }
        else
        {
            res += roman(s[i]);
        }
    }

    return res;
}
int main(){
    string s="LVII";
    int res=romanToInt(s);
    cout<<res;
}