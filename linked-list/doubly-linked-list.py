class Node:
    def __init__(self, data):
        self.prev = None
        self.data = data
        self.next = None

head = Node(10)

one = Node(20)
head.next = one
one.prev = head

two = Node(30)
one.next = two
two.prev = one

three = Node(40)
two.next = three
three.prev = two

tail = Node(50)
three.next = tail
tail.prev = three

tail.next = head
head.prev = tail

total = 0
temp = head

while total < 1000:
    print(f"{temp.data} -> ", end="")
    if temp.data == 50:
        print(" | ", end="")
    total = total + temp.data
    temp = temp.next

print("\n")

motal = 0
temp2 = tail

while motal < 1000:
    print(f"{temp.data} -> ", end="")
    if temp.data == 10:
        print(" | ", end="")
    motal = motal + temp.data
    temp = temp.prev