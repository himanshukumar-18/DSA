#link list

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