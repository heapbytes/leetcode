/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x){

  if(!head){
    return NULL;
  }

  struct ListNode small_nodes;
  struct ListNode big_nodes;
  struct ListNode* small = &small_nodes;
  struct ListNode* big = &big_nodes;

  small->next = NULL;
  big->next = NULL;

  while(head){
    if(head->val < x){
        small->next = head;
        small =  small->next;
    }
    else{
      big->next = head;
      big = big->next;
    }
    head = head->next;
  }

  small->next = big_nodes.next;
  big->next = NULL;

  return small_nodes.next;
}