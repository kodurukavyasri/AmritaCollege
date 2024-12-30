class my_Stack:
    def __init__(self, max_size):
        self.max_size = max_size
        self.stack = []

    def push(self, item):
        if self.isfull():
            print("Stack is full", item)
            return "Sorry!"
        self.stack.append(item)
        print("pushed:", item)
    
    def pop(self):
        if self.isempty():
            print("Stack is empty")
            return None
        return self.stack.pop()
    
    def isempty(self):
        return len(self.stack) == 0
    
    def isfull(self):
        return len(self.stack) == self.max_size

    def print_stack(self):
        if self.isempty():
            print("Stack is empty.")
        else:
            print("Stack contents:", self.stack)

stack = my_Stack(3)
stack.push(1)
stack.push(2)
stack.push(3)