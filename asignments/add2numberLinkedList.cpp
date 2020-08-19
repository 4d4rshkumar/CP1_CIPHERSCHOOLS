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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *temp = new ListNode(0);
    ListNode *a = l1, *b = l2, *current = temp;
    int x, y, carry = 0;
    while (a != NULL || b != NULL)
    {
        if (a != NULL)
        {
            x = a->val;
        }
        else
        {
            x = 0;
        }
        if (b != NULL)
        {
            y = b->val;
        }
        else
        {
            y = 0;
        }
        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if (a != nullptr)
        {
            a = a->next;
        }
        if (b != nullptr)
        {
            b = b->next;
        }
    }
    if (carry > 0)
    {
        current->next = new ListNode(carry);
    }
    return temp->next;
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
    ListNode *list2 = nullptr;
    for (int i = 4; i > 0; i--)
    {
        insert(&list, i);
    }
    for (int i = 1; i<=3; i++)
    {
        insert(&list2, i);
    }
    ListNode *res=addTwoNumbers(list,list2);
    traverse(res);
}