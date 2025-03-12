# Sorting Linked List

This project demonstrates the implementation of sorting a linked list using the **Merge Sort** algorithm in C++. 
The code handles linked list creation, sorting, and memory management efficiently.

## Features
- **Linked List Creation:** Users can input the size and values for the linked list.
- **Traversal:** Displays the linked list in a clear format.
- **Merge Sort Implementation:** Efficiently sorts the linked list using the divide-and-conquer approach.
- **Memory Management:** Ensures all dynamically allocated memory is properly deallocated.

## Code Overview
### Functions
- **`Node` Class:**
  - Represents each node of the linked list.
  - Contains `data` (integer value) and `next` (pointer to the next node).

- **`createLL()` Function:**
  - Prompts the user to input the size and elements of the linked list.
  - Returns the head of the created linked list.

- **`traversal()` Function:**
  - Iterates through the linked list to print its elements.

- **`splitList()` Function:**
  - Splits the linked list into two halves using the fast/slow pointer technique for efficient division.

- **`mergeLists()` Function:**
  - Merges two sorted linked lists into one sorted list.

- **`mergeSort()` Function:**
  - Implements the Merge Sort algorithm to recursively sort the linked list.

- **`freeLinkedList()` Function:**
  - Deallocates all dynamically allocated memory to prevent memory leaks.

- **`main()` Function:**
  - Manages user input, initiates sorting, and displays the sorted linked list.

## How to Run
1. Copy the code into a `.cpp` file.
2. Compile the code using a C++ compiler:
   ```bash
   g++ linked_list_sort.cpp -o linked_list_sort
   ```
3. Run the executable:
   ```bash
   ./linked_list_sort
   ```
4. Follow the prompts to enter the size and elements of the linked list.

## Sample Output
```
ENTER SIZE: 5
ENTER VALUE: 4
ENTER VALUE: 2
ENTER VALUE: 3
ENTER VALUE: 1
ENTER VALUE: 5
Linked List
4 -> 2 -> 3 -> 1 -> 5
Updated LList
1 -> 2 -> 3 -> 4 -> 5
```

## Key Concepts
- **Merge Sort:** Efficient O(n log n) sorting algorithm suitable for linked lists.
- **Fast/Slow Pointer Technique:** Ensures optimal splitting of the linked list.

## Improvements
- Add error handling for invalid inputs.
- Implement additional linked list operations such as insertion, deletion, and reversal.

## Contributing
Contributions to improve functionality, enhance performance, or add new features are welcome. Feel free to submit a pull request!
