# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:

        num = []
        while(head):
            num.append(head.val)
            head = head.next
    
        carry = 0
        send = []
        for i in range(len(num)-1, -1, -1):

            total = carry + (num[i] * 2)
            carry = total // 10
            send.append(total%10)
        
        if carry > 0:
            send.append(carry)

        ans = ListNode()
        dummy = ans

        send = send[::-1]

        for i in send:
            newNode = ListNode(i)
            dummy.next = newNode
            dummy = dummy.next

        return ans.next
            
