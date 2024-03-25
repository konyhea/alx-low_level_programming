# Doubly Linked List

Welcome to the Doubly Linked List implementation!

## What is a Doubly Linked List?

A doubly linked list is a data structure that consists of a sequence of elements, called nodes. Each node contains a piece of data and two pointers/references to the next and previous nodes in the sequence, hence the term "doubly" linked. This structure allows traversal in both forward and backward directions.

## Features

- **Bidirectional traversal**: Unlike singly linked lists, doubly linked lists allow traversal in both forward and backward directions.
- **Insertion and deletion**: Efficient insertion and deletion operations, especially at the beginning and end of the list.
- **Dynamic sizing**: The size of the doubly linked list can dynamically grow and shrink as elements are added or removed.
- **Versatility**: Doubly linked lists can be used to implement various data structures and algorithms, such as stacks, queues, deques, and more.

## How to Use

To use this Doubly Linked List implementation, follow these steps:

1. **Download or clone the repository**: Get the source code of the implementation.
2. **Include the Doubly Linked List in your project**: Add the necessary files to your project.
3. **Instantiate the Doubly Linked List**: Create an instance of the DoublyLinkedList class.
4. **Perform operations**: Use the provided methods to perform operations such as insertion, deletion, traversal, etc.
5. **Compile and run**: Compile your project and run the code to see the Doubly Linked List in action.

## Example

Here's a simple example demonstrating the usage of the Doubly Linked List:

```python
from doubly_linked_list import DoublyLinkedList

# Instantiate a Doubly Linked List
dll = DoublyLinkedList()

# Insert elements
dll.append(1)
dll.append(2)
dll.append(3)

# Print elements forward
dll.print_forward()  # Output: 1 -> 2 -> 3

# Print elements backward
dll.print_backward()  # Output: 3 -> 2 -> 1

