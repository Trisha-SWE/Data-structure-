# Data Structures and Algorithms

This repository contains implementations of various data structures and algorithms in C, organized into distinct categories. It is designed to help learners understand the fundamental concepts of data structures and practice solving common problems related to each data structure.

## Table of Contents

- [Array](#array)
- [Linked List](#linked-list)
- [Stack](#stack-data-structure)
- [Queue](#queue-data-structure)
- [Graph](#graph)
- [Tree](#tree)
- [Searching Algorithms](#searching-algorithms)
- [Sorting Algorithms](#sorting-algorithms)
- [Pointer](#pointer)

---

## Array

- **Description**: Arrays are one of the most basic data structures, where elements are stored in contiguous memory locations.
- **Problems**: This section contains 10 array-related problems, including tasks like finding odd numbers, and more.
- **Key Topics**: Traversal, insertion, deletion, searching, etc.

  ### Find the Maximum Element in an Array

This C program reads a list of numbers from the user, stores them in an array, and then finds the maximum element.
```c
#include <stdio.h>

int main() {
    int n, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Maximum element: %d\n", max);
    return 0;
}
```

## Linked List

- **Description**: Linked Lists are a linear data structure where elements are not stored at contiguous memory locations.
- **Problems**: This section includes 10 linked list problems that cover concepts such as node insertion, deletion, reversal, and merging of lists.
- **Key Topics**: Singly linked list, doubly linked list, circular linked list.

## Stack Data Structure

- **Description**: A stack is a linear data structure that follows the Last In First Out (LIFO) principle.
- **Problems**: Includes common stack operations and questions related to stack use cases.
- **Key Topics**: Push, pop, top/peek operations, and stack-based algorithms (e.g., parentheses matching).

## Queue Data Structure

- **Description**: A queue is a linear data structure that follows the First In First Out (FIFO) principle.
- **Problems**: Includes queue implementation and related problem-solving.
- **Key Topics**: Enqueue, dequeue, circular queue, priority queue.

## Graph

- **Description**: Graphs are collections of nodes connected by edges. They can be used to represent networks like social networks, computer networks, etc.
- **Problems**: Solutions related to graph traversal, pathfinding, and other graph-based algorithms.
- **Key Topics**: BFS, DFS, adjacency list, adjacency matrix.

## Tree

- **Description**: Trees are hierarchical data structures consisting of nodes connected by edges. Trees are a type of graph but without cycles.
- **Problems**: Tree traversal, tree construction, and common tree problems.
- **Key Topics**: Binary trees, binary search trees (BST), AVL trees, tree traversal (inorder, preorder, postorder).

## Searching Algorithms

- **Description**: This section contains solutions for common searching algorithms such as linear search and binary search.
- **Key Topics**: Linear search, binary search, complexity analysis.

## Sorting Algorithms

- **Description**: Sorting algorithms are used to arrange data in a particular order. This section contains implementations of basic sorting algorithms.
- **Key Topics**: Bubble sort, merge sort, quick sort, insertion sort, selection sort.

## Pointer

- **Description**: Pointers are variables that store the memory address of another variable.
- **Key Topics**: Pointer arithmetic, pointer arrays, double pointers, dynamic memory allocation using pointers.

---

## Contributing

We welcome contributions! If you'd like to contribute, please fork the repository, make changes in your fork, and submit a pull request. Ensure that your code is well-documented and follows a consistent style.


---
