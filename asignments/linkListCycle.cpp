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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==nullptr){
            return false;
        }
        ListNode *fastptr=head->next;
        ListNode *slowptr=head;
        while(slowptr!=fastptr){
            if(fastptr==nullptr||fastptr->next==nullptr){
                return false;
            }
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        return true;
    }
void insert(ListNode **head, int data)
{
    ListNode *l1 = new ListNode;
    l1->val = data;
    l1->next = *head;
    *head = l1;
}
void anamoly(ListNode *head)
{
    ListNode *temp=head;
    while (head ->next!= nullptr)
    {
        head = head->next;
    }
    head->next=temp;
    
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
    for (int i = 6; i > 0; i--)
    {
        insert(&list, i);
    }
    traverse(list);
    cout<<hasCycle(list);
    anamoly(list);
    cout<<"\n"<<hasCycle(list);
}
