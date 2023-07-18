/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){

    if(k == 0 || head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode* dummy = head; 



    int c = 1;
    while(dummy->next != NULL){
        c++;
        dummy = dummy->next;
    }

    int rotate = k % c;
    
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;

    for(int i=0; i<rotate; i++){
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        curr->next = head;
        prev->next = NULL;
        head = curr;   
    }

    return head;

}