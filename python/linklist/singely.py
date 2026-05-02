#singely linkedlist

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None

    # Insertion at beginning
    def insert_begin(self, data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
        
    # inserting at end
    def insert_end(self, data):
        newNode = Node(data)
        
        if self.head is None:
            self.head = newNode
            return

        temp = self.head
        while temp.next:
            temp = temp.next
        
        temp.next = newNode
    
    def insert_position(self, data, pos):
        newNode = Node(data)
        
        if pos == 0:
            newNode.next = self.head
            self.head = newNode
            return

        temp = self.head
        for _ in range(pos - 1):
            if temp is None:
                print("Position out of range!!")
                return
            temp  = temp.next
        
        newNode.next = temp.next
        temp.next = newNode
        
    def del_begin(self):
        if self.head is None:
            print("List is empty!!")
            return
        self.head = self.head.next
    
    def del_end(self):
        if self.head is None:
            print("List is empty!!")
            return

        if self.head.next is None:
            self.head = None
            return

        temp = self.head
        while temp.next.next:
            temp = temp.next

        temp.next = None
    
    def del_pos(self, pos):
        if self.head is None:
            print("List is empty!!")
            return
        
        if pos == 0:
            self.head = self.head.next
            return
        
        temp = self.head
        
        for _ in range(pos - 1):
            if temp.next is None:
                print("Position outof range!!")
                return
            temp = temp.next
        
        if temp.next is None:
            print("Position outof range!!")
            return
        
        temp.next = temp.next.next
        
    
    # Display the list
    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end='->')
            temp = temp.next
        print("None")

ll = LinkedList()
ll.insert_begin(10)
ll.insert_begin(20)
ll.insert_begin(30)
ll.insert_end(40)
ll.insert_position(5, 0)
ll.insert_position(10, 1)
ll.del_begin()
ll.del_end()
ll.del_pos(2)
ll.display()
