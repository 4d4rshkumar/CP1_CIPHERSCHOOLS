#include<bits/stdc++.h>
using namespace std;
int applyOp(int a, int b, char op)
{
    int out = 0;

    switch (op)
    {
    case '+':
        out = a + b;
        break;
    case '-':
        out = a - b;
        break;
    case '*':
        out = a * b;
        break;
    case '/':
        out = a / b;
        break;
    }
    return out;
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;
}
int calculate(string s)
{
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < s.size(); ++i)
    {
        char ch = s[i];
        if (ch == ' ')
            continue;
        else if (isdigit(ch))
        {
            long num = 0;

            while (i < s.size() && isdigit(s[i]))
            {
                num = num * 10 + s[i] - '0';
                ++i;
            }
            nums.push(num);
            --i;
        }
        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(ch))
            {
                int num2 = nums.top();
                nums.pop();
                int num1 = nums.top();
                nums.pop();

                int out = applyOp(num1, num2, ops.top());
                ops.pop();
                nums.push(out);
            }
            ops.push(ch);
        }
    }
    while (!ops.empty())
    {
        int num2 = nums.top();
        nums.pop();
        int num1 = nums.top();
        nums.pop();

        int out = applyOp(num1, num2, ops.top());
        ops.pop();

        nums.push(out);
    }

    return nums.top();
}
int main(){
    cout<<calculate("12+13/5");
}