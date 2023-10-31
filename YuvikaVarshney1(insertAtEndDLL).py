class Node:
    def __init__(self, val=0, next=None, prev=None):
        self.val = val
        self.prev = prev
        self.next = next


# Please do not change code above.


def insertAtTail(head: Node, k: int) -> Node:
    # Write your code here
    t=Node(k)
    if head==None:
        head=t
        return head
    
    temp=head
    while temp.next!=None:
        temp=temp.next
    t.prev=temp
    temp.next=t
    return head

    pass
