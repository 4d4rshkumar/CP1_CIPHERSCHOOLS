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

bool isPalindrome(ListNode *head)
{
    stack<ListNode *> s;
    ListNode *temp = head;
    while (temp)
    {
        s.push(temp);
        temp = temp->next;
    }
    while (head)
    {
        if (head->val == s.top()->val)
        {
            s.pop();
            head = head->next;
        }
        else
        {
            return false;
        }
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
        if (i >3){
            insert(&list, 7-i);}
        else{
            insert(&list,i);
        }
        
    }
    traverse(list);
    cout<<isPalindrome(list);
}