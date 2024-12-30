class My_Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        return None

    def top(self):
        if not self.is_empty():
            return self.items[-1]
        return None

    def is_empty(self):
        return len(self.items) == 0


class My_Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if not self.is_empty():
            return self.items.pop(0)
        return None

    def front(self):
        if not self.is_empty():
            return self.items[0]
        return None

    def is_empty(self):
        return len(self.items) == 0



    while True:
        print("\nMain Menu:")
        print("1. Stack Operations")
        print("2. Queue Operations")
        print("3. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:  # Stack 
            noofpush = int(input("Enter number of elements to push: "))
            for _ in range(noofpush):
                element = input("Enter element to push: ")
                stack.push(element)

            noofpop = int(input("Enter number of elements to pop: "))
            popped_items = []
            for _ in range(noofpop):
                popped_item = stack.pop()
                if popped_item is not None:
                    popped_items.append(popped_item)

            print(f"Popped items: {popped_items}")
            print(f"Top item: {stack.top()}")

        elif choice == 2:  # Queue 
            noofenqueue = int(input("Enter number of elements to enqueue: "))
            for _ in range(noofenqueue):
                element = input("Enter element to enqueue: ")
                queue.enqueue(element)

            noofdequeue = int(input("Enter number of elements to dequeue: "))
            dequeued_items = []
            for _ in range(noofdequeue):
                dequeued_item = queue.dequeue()
                if dequeued_item is not None:
                    dequeued_items.append(dequeued_item)

            print(f"Dequeued items: {dequeued_items}")
            print(f"Front item: {queue.front()}")

        elif choice == 3:  # Exit
            print("Exiting the program.")
            break

        else:
            print("Invalid choice. Please try again.")
