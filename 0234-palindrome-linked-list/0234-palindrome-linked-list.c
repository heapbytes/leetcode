/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    
    int count = 0;
    struct ListNode* tmp = head;

    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }

    free(tmp);
    int* ans = malloc(sizeof(int) * count);

    int i=0;
    while(head != NULL){
        ans[i] = head->val;
        head = head->next;
        i++;
    }

    int sup = count/2;
    for(int j=count-1; j>=count/2; j--){
        if(ans[j] != ans[count-1-j]){
            free(ans);
            return false;
        }
    }

    free(ans);
    return true;

}