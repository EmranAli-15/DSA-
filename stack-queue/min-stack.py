class Stack:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None
            self.nextMin = None

    def __init__(self):
        self.top = None
        self.min = None
        
    def push(self, data):
        node = self.Node(data)

        node.nextMin = self.min
        if not self.top:
            self.min = node
        else:
            if data <= self.min.data:
                self.min = node
            

        node.next = self.top
        self.top = node
    
    def pop(self):
        if self.top is None:
            return "Stack is empty."
        else:
            data = self.top.data

            self.min = self.top.nextMin
            self.top = self.top.next

            return data

    
    def minData(self):
        if self.min is None:
            return "Min-Stack is empty."
        else:
            return self.min.data

my_stack = Stack()

my_stack.push(5)
my_stack.push(3)
my_stack.push(7)
my_stack.push(4)

print("Current Min:", my_stack.minData())
print("stack => ", my_stack.pop())
print("Current Min:", my_stack.minData())
print("stack => ", my_stack.pop())
print("Current Min:", my_stack.minData())
print("stack => ", my_stack.pop())
print("Current Min:", my_stack.minData())
print("stack => ", my_stack.pop())
print("Current Min:", my_stack.minData())