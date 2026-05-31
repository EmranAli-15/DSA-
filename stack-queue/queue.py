class Queue:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None
    

    def __init__(self):
        self.head = None
        self.tail = None

    
    def push(self, data):
        node = self.Node(data)
        if self.head is None:
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = node
    
    def pull(self):
        if self.head is None:
            return "Queue is empty."

        data = self.head.data
        self.head = self.head.next

        if self.head is None:
            self.tail = None
        return data


my_queue = Queue()

print(my_queue.pull())

my_queue.push(4)
    
print(my_queue.pull())

my_queue.push(7)

print(my_queue.pull())
print(my_queue.pull())
print(my_queue.pull())

my_queue.push(7)
my_queue.push(3)
my_queue.push(2)

print(my_queue.pull())
print(my_queue.pull())