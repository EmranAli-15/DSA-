class Stack:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None

    def __init__(self):
        self.top = None
        
    def push(self, data):
        node = self.Node(data)
        node.next = self.top
        self.top = node
    
    def pop(self):
        if self.top is None:
            return "Stack is empty."
        else:
            data = self.top.data
            self.top = self.top.next
            return data


my_stack = Stack()

print(my_stack.pop())

my_stack.push(4)
my_stack.push(8)
my_stack.push(10)

print(my_stack.pop())
print(my_stack.pop())