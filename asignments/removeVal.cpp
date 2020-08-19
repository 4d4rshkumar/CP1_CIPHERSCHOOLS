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

ListNode *removeElements(ListNode *head, int val)
{
    while (head && head->next)
    {
        if (head->next->val == val)
        {
            head->next = head->next->next;
        }
        else
        {
            head = head->next;
        }
    }
    if (head && head->val == val)
    {
        return head->next;
    }
    return head;
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
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}
int main()
{
    ListNode *list = nullptr;
    for (int i = 6; i > 0; i--)
    {
        insert(&list, i);
    }
    traverse(list);
    removeElements(list,4);
    traverse(list);
}