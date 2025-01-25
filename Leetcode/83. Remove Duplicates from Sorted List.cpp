class Solution(object):
    def deleteDuplicates(self, head):
        ptr = head
        while ptr and ptr.next:
            if ptr.val == ptr.next.val:
                ptr.next = ptr.next.next
            else:
                ptr = ptr.next

        return head