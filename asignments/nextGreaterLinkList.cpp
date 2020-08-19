#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
vector<int> nextLargerNodes(ListNode *head)
{
    vector<int> res;
    stack<int> s;
    for (auto p = head; p != nullptr; p = p->next)
    {
        res.push_back(p->val);
    }
    for (int i = res.size() - 1; i >= 0; --i)
    {
        auto val = res[i];
        while (!s.empty() && s.top() <= res[i])
        {
            s.pop();
        }
        res[i] = s.empty() ? 0 : s.top();
        s.push(val);
    }
    return res;
}
void insert(ListNode **head, int data)
{
    ListNode *l1 = new ListNode;
    l1->val = data;
    l1->next = *head;
    *head = l1;
}
void traverse(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    ListNode *list = nullptr;
    for (int i = 1; i <= 6; i++)
    {
        insert(&list, i);
    }
    traverse(list);
    vector<int> res = nextLargerNodes(list);
    for(auto x:res){
        cout<<x<<" ";
    }
}
