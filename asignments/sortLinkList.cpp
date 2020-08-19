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
void swap(ListNode *a, ListNode *b)
{
    int temp = a->val;
    a->val = b->val;
    b->val = temp;
}

ListNode *sortList(ListNode *head)
{
    int swapped, i;
    ListNode *ptr1;
    ListNode *lptr = NULL;
    if (head == NULL)
    {
        return NULL;
    }
    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr)
        {
            if (ptr1->val > ptr1->next->val)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
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
    for (int i = 1; i<=6; i++)
    {
        insert(&list, i);
    }
    traverse(list);
    list=sortList(list);
    traverse(list);
}
