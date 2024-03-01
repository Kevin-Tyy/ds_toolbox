class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_position(self, data, position):
        if position < 1:
            print("Invalid position.")
            return
        
        new_node = Node(data)

        if position == 1:
            new_node.next = self.head
            self.head = new_node
        else:
            current = self.head
            for _ in range(position - 2):
                if current is None:
                    print("Position out of range.")
                    return
                current = current.next
            
            if current is None:
                print("Position out of range.")
                return
            
            new_node.next = current.next
            current.next = new_node

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

# Example usage
linked_list = LinkedList()
linked_list.insert_at_position(1, 1)   # Insert 1 at position 1
linked_list.insert_at_position(2, 2)   # Insert 2 at position 2
linked_list.insert_at_position(3, 3)   # Insert 3 at position 3
linked_list.insert_at_position(4, 2)   # Insert 4 at position 2
linked_list.display()  # Output: 1 -> 4 -> 2 -> 3 -> None
