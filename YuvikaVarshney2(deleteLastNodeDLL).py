class Node:
    def __init__(self, data=0, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev


# Do not change code above.


def deleteLastNode(head: Node) -> Node:
    # Write your code heret
    if head.next==None:
        head=None
        return head
    t1=head
    t2=head
    while t1.next!=None:
        t2=t1
        t1=t1.next
    t2.next=None
    return head
    pass
