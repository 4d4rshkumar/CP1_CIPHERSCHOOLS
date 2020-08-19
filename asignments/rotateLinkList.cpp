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

ListNode *rotateRight(ListNode *head, int k)
{
    if (!head)
        return head;
    int len = 1;
    ListNode *h, *tail;
    h = tail = head;

    while (tail->next)
    {
        tail = tail->next;
        len++;
    }
    tail->next = head;

    if (k %= len)
    {
        for (auto i = 0; i < len - k; i++)
        {
            tail = tail->next;
        }
    }
    h = tail->next;
    tail->next = NULL;
    return h;
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
    list=rotateRight(list, 4);
    traverse(list);
}