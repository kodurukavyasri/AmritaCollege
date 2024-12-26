class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, item):
        """Add an item to the end of the queue."""
        self.queue.append(item)

    def dequeue(self):
        """Remove and return the front item from the queue. Raises an exception if the queue is empty."""
        if self.is_empty():
            raise IndexError("Dequeue from an empty queue")
        return self.queue.pop(0)

    def front(self):
        """Return the front item of the queue without removing it. Raises an exception if the queue is empty."""
        if self.is_empty():
            raise IndexError("Front from an empty queue")
        return self.queue[0]

    def is_empty(self):
        """Return True if the queue is empty, False otherwise."""
        return len(self.queue) == 0

    def size(self):
        """Return the number of items in the queue."""
        return len(self.queue)

# Create a queue
q = Queue()

# Enqueue elements into the queue
q.enqueue(14)
q.enqueue(3)
q.enqueue(5)

# Get the front element
print("Front element is:", q.front())  # Output: Front element is: 14

# Dequeue the front element
print("Dequeued element is:", q.dequeue())  # Output: Dequeued element is: 14

# Check if the queue is empty
print("Is queue empty?", q.is_empty())  # Output: Is queue empty? False

# Get the current size of the queue
print("Current size of the queue:", q.size())  # Output: Current size of the queue: 2
