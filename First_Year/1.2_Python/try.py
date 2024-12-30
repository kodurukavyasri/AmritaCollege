# Create a Node class to create a node
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    
# Create a LinkedList CLass
class LinkedList:
    def __init__(self):
        self.head = None

    # Method to add a node at begin of Linked list
    def insertAtBegin(self,data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        else:
            new_node.next = self.head
            self.head = new_node

    # Method to add a node at the end of the Linked list
    def insertAtEnd(self,data):
        new_node = Node(data)
        if self.next is None:
            self.next = new_node
            return
        else:
            new_node.next = self.head
            self.head = new_node

    # Method to add a node at any index
    # Indexing starts from 0
    def InsertNewNode(self,data,index):
        new_node = Node(data)
        if (position == 0):
            self.insertAtBegin(data)
        
        position = 0
        current_node = self.head
        while(current_node != None and position+1 != index):
            position = position+1
            current_node = current_node.next

        if current_node != None:
            new_node = Node(data)
            new_node.next = new_node
            current_node.next = new_node
        else:
            print("Index is not present")

    # Method to delete a node at starting
    def DeleteAtBegining(self,data):
        if (self.head == None):
            return
        
        else:
            self.head = self.head.next

    # Method to delete a node at ending
    def DeleteAtEnd(self,data):
        if (self.node == None):
            self.node.next = self.node



