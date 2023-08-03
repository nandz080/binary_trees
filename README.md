0x1D. C - Binary trees

A binary tree is a fundamental data structure used in computer science and programming. It is a hierarchical data structure in which each node has at most two children, commonly referred to as the "left child" and the "right child."

The structure of a binary tree consists of nodes, and each node contains a piece of data (referred to as the "key" or "value") and two references (or pointers) to its left and right children. These references can be NULL if a child node does not exist.

Here are some important characteristics of a binary tree:

Root: The topmost node of the tree, which has no parent. There is only one root in a binary tree.

Parent: A node in the tree that has one or more child nodes.

Child: A node that is directly connected to another node when moving away from the root.

Leaf: A node with no children (i.e., both left and right child references are NULL).

Height: The length of the longest path from the root node to a leaf node. The height of an empty tree is typically considered to be -1, and a tree with only one node has a height of 0.

Binary trees can be used to implement various data structures and algorithms. Some common types of binary trees include:

Binary Search Tree (BST): A special type of binary tree in which for each node, all elements in its left subtree are less than its value, and all elements in its right subtree are greater than its value. This property allows for efficient searching, insertion, and deletion operations.

Complete Binary Tree: A binary tree in which all levels, except possibly the last one, are completely filled, and all nodes in the last level are as far left as possible.

Balanced Binary Tree: A binary tree in which the difference in height between the left and right subtrees of every node is no more than one. This property ensures that the tree remains relatively balanced, leading to improved performance for various operations.

Binary trees have numerous applications in computer science, including in search algorithms, sorting algorithms, expression evaluation, and more. They are fundamental to understanding more complex data structures and algorithms.

The main difference between a binary tree and a binary search tree lies in the organization and constraints applied to the nodes and their values:

Binary Tree:

A binary tree is a hierarchical data structure in which each node can have at most two children, known as the "left child" and the "right child."
There are no specific constraints on how the values are organized within the nodes, meaning the values can be arranged in any order without adhering to any particular pattern.
Binary trees can be balanced or unbalanced, and they are used in various applications where hierarchical organization is required.
Binary Search Tree (BST):

A binary search tree is a special type of binary tree that follows specific rules for organizing its nodes and values.
In a binary search tree, for each node:
All elements in its left subtree are less than its value.
All elements in its right subtree are greater than its value.
This property enables efficient searching, insertion, and deletion operations, as it provides a systematic way to traverse the tree while maintaining the relative order of the elements.
If the BST is balanced (i.e., the left and right subtrees of each node have approximately the same number of nodes), the height of the tree remains logarithmic, leading to efficient operations with a time complexity of O(log n), where n is the number of nodes.
In summary, while both binary trees and binary search trees are based on the concept of having at most two children for each node, a binary search tree enforces an additional constraint on how the values are organized, making it suitable for efficient searching, insertion, and deletion operations. On the other hand, a regular binary tree can be used in more general hierarchical structures without the specific ordering requirement.

Resources
Read or watch:

Binary tree (note the first line: Not to be confused with B-tree.)
Data Structure and Algorithms - Tree
Tree Traversal
Binary Search Tree
Data structures: Binary Tree
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are allowed to use the standard library
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called binary_trees.h
Don’t forget to push your header file
All your header files should be include guarded
GitHub
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

More Info
Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

Basic Binary Tree
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
Binary Search Tree
typedef struct binary_tree_s bst_t;
AVL Tree
typedef struct binary_tree_s avl_t;
Max Binary Heap
typedef struct binary_tree_s heap_t;
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

Print function
To match the examples in the tasks, you are given this function

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction
