class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

head = None
current = None
n = int(input("Enter the number of nodes: "))
for i in range(1, n):

    newnode = Node(i * 10)

    if head is None:
        head = newnode
        current = newnode

    else:
        current.next = newnode
        current = newnode


current = head

while current is not None:

    print("Data:", current.data)
    print("Next:", current.next)
    

    current = current.next