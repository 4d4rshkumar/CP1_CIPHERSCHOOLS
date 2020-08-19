 #include<bits/stdc++.h>
 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* middleNode(ListNode* head) {
        ListNode *ptr1=head;
        ListNode *ptr2=head;
        while(ptr2!=NULL && ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return ptr1;
        
}
void insert(ListNode **head,int data){
    ListNode *l1=new ListNode;
    l1->val=data;
    l1->next=*head;
    *head=l1;

}
void traverse(ListNode *head){
    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main(){
    ListNode *list=nullptr;
    for(int i=6;i>0;i--){
        insert(&list,i);
    }
    traverse(list);
    ListNode *res=middleNode(list);
    traverse(res);
}
