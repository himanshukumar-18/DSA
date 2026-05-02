#link list

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
node4 = Node(40)
node5 = Node(50)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

head = node1

while head is not None:
    print(head.data, end="->")
    head = head.next
print("None")

#create class node
"""
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        

# create nodes
node1 = Node(10)
node2 = Node(20)
node3 = Node(30)    
node4 = Node(40)

#linkes nodes
node1.next = node2
node2.next = node3
node3.next = node4


#print
current = node1

while current is not None:
    print(current.data, end="->")
    current = current.next

print("None")
"""

"""
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
node1 = Node(100)
node2 = Node(200)
node3 = Node(300)
node4 = Node(400)
node5 = Node(500)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

curr = node1

while curr is not None:
    print(curr.data, end="->")
    curr = curr.next

print("None")
"""

#question 1
#rev a linkd list

"""
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

node1 = Node(100)
node2 = Node(200)
node3 = Node(300)
node4 = Node(400)

node4.next = node3
node3.next = node2
node2.next = node1

current = node4
count = 0

while current is not None:
    print(current.data, end="->")
    count = count + 1
    current = current.next

print("None")
print("Total length = ",count)
"""


"""
class Node:
    def __init__(self, info, next = None):
            self.data = info
            self.next = next
            
class SinglyLinkedList:
    def __init__(self, head = None):
         self.head = head
         
    def insertStart(self, value):
        temp = Node(value)
        temp.next = self.head
        self.head = temp
         
    def insertAtTheEnd(self, value):
        temp = Node(value)
        if(self.head != None):
            t1 = self.head
            while(t1.next != None):
                t1 = t1.next
            t1.next = temp
        else:
            self.head = temp
            
    def insertMid(self, value, x):
        temp = Node(value)
        t1 = self.head
        
        while(t1.next != None):
            if(t1.data == x):
                temp.next = t1.next
                t1.next = temp
            t1 = t1.next
    
    def deleteLL(self, value):
        t1 = self.head
        prev = None
        
        # If head needs to be deleted
        if(t1 is not None and t1.data == value):
            self.head = t1.next
            return
        
        # Traverse the list to find the node to delete
        while(t1 is not None):
            if(t1.data == value):
                prev.next = t1.next
                return
            else:
                prev = t1
                t1 = t1.next
        
    def printLL(self):
        t1 = self.head
        while(t1.next != None):
            print(t1.data, end="->")
            t1 = t1.next
        print(t1.data)
        
obj = SinglyLinkedList()
obj.insertAtTheEnd(10)
obj.insertAtTheEnd(20)
obj.insertAtTheEnd(30)
obj.insertStart(5)
obj.insertMid(40, 20)
obj.deleteLL(30)
obj.printLL()
"""

"""
class Node:
    def __init__(self, value, next = None):
        self.data = value
        self.next = next
        
class SinglyLinkedList:
    def __init__(self, head = None):
        self.head = head
        self.tail = head
        
    def insert(self, value):
        newNode = Node(value)

        # if list is empty
        if self.head is None:
            self.head = newNode
            self.tail = newNode
        else:
            # insert at end
            self.tail.next = newNode
            self.tail = newNode
    
    def delete(self, value):
        t1 = self.head
        prev = None
        
        # If head needs to be deleted
        if(t1 is not None and t1.data == value):
            self.head = t1.next
            return
        
        # Traverse the list to find the node to delete
        while(t1 is not None):
            if(t1.data == value):
                prev.next = t1.next
                return
            else:
                prev = t1
                t1 = t1.next
                 
    def display(self):
        t1 = self.head
        while(t1 != None):
            print(t1.data, end="->")
            t1 = t1.next
        print("None")
        
obj = SinglyLinkedList(None)
obj.insert(10)
obj.insert(20)
obj.insert(30)
obj.insert(40)
obj.insert(50)
obj.delete(30)
obj.display()
"""


#doubly link list

from platform import node


class Node:
    def __init__(self, val):
        self.data = val
        self.prev = None
        self.next = None
        
"""
n1 = Node(10)
n2 = Node(20)
n3 = Node(30)
n4 = Node(40)

n1.next = n2
n2.prev = n1
n2.next = n3
n3.prev = n2
n3.next = n4
n4.prev = n3


current = n1

while current is not None:
    print(current.data, end="->")
    current = current.next
print("None")
"""


class DoublyLinkedList:
    def __init__(self):
        self.head = None
    
    def insert_head(self, value):
        newNode = Node(value)
        if self.head is None:
            self.head = newNode
        else:
            newNode.next = self.head
            self.head.prev = newNode
            self.head = newNode
     
    def insert_end(self, value):
        newNode = Node(value)
        if self.head is None:
            self.head = newNode
        else:
            temp = self.head
            while temp.next is not None:
                temp = temp.next
            temp.next = newNode
            newNode.prev = temp 
    
    def delet(self, value):
        temp = self.head
        
        # If head needs to be deleted
        if temp is not None and temp.data == value:
            self.head = temp.next
            if self.head is not None:
                self.head.prev = None
            return
        
        # Traverse the list to find the node to delete
        while temp is not None:
            if temp.data == value:
                if temp.next is not None:
                    temp.next.prev = temp.prev
                if temp.prev is not None:
                    temp.prev.next = temp.next
                return
            else:
                temp = temp.next
                
    def display(self):
        temp = self.head
        while temp is not None:
            print(temp.data, end="->")
            temp = temp.next
        print("None")
                
obj = DoublyLinkedList()
obj.insert_end(10)
obj.insert_end(20)
obj.insert_end(30)
obj.insert_head(5)     
obj.display()       
    