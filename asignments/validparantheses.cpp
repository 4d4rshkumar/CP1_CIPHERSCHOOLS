#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> stk;
    char c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stk.push(s[i]);
            continue;
        }
        if (stk.empty())
            return false;

        switch (s[i])
        {
        case ')':
            c = stk.top();
            stk.pop();
            if (c == '{' || c == '[')
                return false;
            break;

        case '}':
            c = stk.top();
            stk.pop();
            if (c == '(' || c == '[')
                return false;
            break;

        case ']':
            c = stk.top();
            stk.pop();
            if (c == '(' || c == '{')
                return false;
            break;
        }
    }
    return (stk.empty());
}
int main(){
    cout<<isValid("(){}[]")<<endl;
    cout << isValid("(){[]");
}