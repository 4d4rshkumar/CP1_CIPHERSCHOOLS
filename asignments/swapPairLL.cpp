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

ListNode *swapPairs(ListNode *head)
{
    if (head == NULL)
    {
        return head;
    }
    ListNode *prev = head, *temp = prev->next;
    if (temp == NULL)
    {
        return head;
    }
    head = temp;
    prev->next = temp->next;
    temp->next = prev;
    temp = prev->next;

    while (temp && temp->next)
    {
        ListNode *curr = temp->next;
        prev->next = curr;
        temp->next = curr->next;
        curr->next = temp;
        prev = temp;
        temp = temp->next;
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
    list=swapPairs(list);
    traverse(list);
}