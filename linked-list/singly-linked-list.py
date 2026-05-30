class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

one = Node(5)

two = Node(6)
one.next = two

three = Node(9)
two.next = three

four = Node(3)
three.next = four


# Add to the front
newHead = Node(1)
newHead.next = one
one = newHead


# Add to the end
end = one
while end.next:
    end = end.next
tail = Node(100)
end.next = tail

temp = one
while temp is not None:
    print(f'{temp.data} -> ', end="")
    temp = temp.next