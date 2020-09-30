# DS-ALGO

# LINKED LIST 

 Linked List is a linear collection of the data elements. It is data structure consisting of collection of nodes which together represents the sequence. Each node consists of: o Data o Reference (Address to next node)
<h> Features of Linked List </h>
 •	Structure of Linked List allows the efficient insertion or removal of an element at any position.
 
 •	Access time is linear in Linked List.
 
 •	Random access is not feasible in Linked List.
 
 •	Arrays have better cache locality compared to Linked List 
<b>Cache Locality(Locality of Reference or Principal of Locality)</b>
Tendency of a processor to access same set of memory location repetitively over a shorter period of a time. 
<h2>Benefit of a Linked List over an array.</h2> 
The list items could be easily removed or re-inserted without any reallocation or reorganization of an entire structure because data items could not be restored contiguously. 
In the disk, while restructuring in an array is a long process. Linked List are dynamic, so the length of the list can be increased or decreased depending upon situation. However, the length of the array remains same as that at the time of deceleration and cannot be changed. 
<h2> Insertion in the Linked List </h2>
Insertion in the Linked List, is a proccess of adding elements in the Linked List. Insertion in the Linked List is of three types:
1. Insert at Head 
2. Insert at Tail 
3. Insert in Middle 
<h2> Deletion in the Linked List </h2>
Deletion in the Linked List, is a process of removing the elements from the Linked List. Deletion is of three types:
1. Deletion at the Head 
2. Deletion at the Tail 
3. Deletion in the Middle 
<h2> Searching in the Linked List </h2>
Searching , is a process of Searching elements in the Linked List. Search could be done by:
 
 1. Iteration 
 
 2. Recursion 
 
 <h2> Reversing the Linked List </h2> 
 
 Reversing, is a process of changing the order of elements in the linked list. Reversing is done by:
 
 1. Iteration 
 
 2. Recursion 
 
 <h2> Operator Overloading in the Linked List </h2>
 
 Operator overloading, is a process of overloading in order to perform specific operation in the list. 
 
 <h2> Printing the Linked List </h2> 
 
 A special customized loop is setup, to print up the elements in the linked list and print the value in it till NULL is reached. 
 
 <h2> Why Merge Sort is preffered for Linked List </h2>
 
 The reason behind this is:
 
 1. The complexity of the Merge sort remain as that of O(nlogn) despite the fact that, we find the mid-point in the Linked List 
 
 2. In Linked List, we can insert a node in between in O(1) time and space complexity ; if we are given reference to the previous node 
 
 3. We do not have random access to elements in the Linked List 
 
 4. Linked List follows sequential pattern, while reffering to any node. So, that could be a overhead for quick sort. Merge sort access the data sequentially. 
 
 <h2> Circular Linked List </h2>
 
 When the tail node points to the head node instead of pointing to the NULL Pointer; then that linked list is called as Circular Linked List. 
 
 Some of the Applications of the Circular Linked List are:
 
 1. In many C.P.U Algorithm, you need Circular Linked List to perform a given operation multiple times 
 
 2. In the implementation of forming different types of Queue 
 
 3. In the implementation of the advanced algorithm such as Fibonacci Heap 
 
<h2> List STL Functions </h2>
List is included in the given C++ Program. The function is there to add all its utility and is managed 
<h3> Push_Back() </h3>
This function is used to add the elements at the end of the list 
<h3> Sort() </h3>
This function is used to sort the given list 
<h3> push_front() </h3>
This function is used to add the element at the front of the list 
<h3> pop_back() </h3>
As, the name goes; This function removes the last element from the list 
<h3> pop_front() </h3>
This function removes the first element from the list 
<h3> insert(position,element) </h3>
This function is used to insert the element in the linked list 
<h3> erase(position) </h3>
This function is used to remove the element in the given list 
<h3> remove(element) </h3>
This function removes the given element from the list 
<h3> front() </h3>
This function is used to print the first element in the list 
<h1> STACK </h1>
Stack is a data structure, which represents the collection of the objects. A item could be added and stored in a stack using push operation. A object can be retrieved using pop operation, to remove an item from the stack. A item could be inserted at the top of the stack. A item could be either removed either from top or bottom of the stack. Their are two types of stack:


1. LIFO(Last In First Out)
2. FIFO(First In First Out)

FIFO stack is basically a type of Queue. 

Stacks have several applications in the Computer Programming. LIFO is used to retrieve, recently used objects from cache. FIFO stacks is used to ensure the data is retrieved in the order it was entered. Stacks are basically created at the background, while application was running in front. If stack, runs out of memory such situation is termed as <b> Stack Overflow </b>.
<h2> Genralizaition of Stack </h2>

A stack could be generalized using templated class <b> template <Typename T> </b> . You can generalize the given code in a following way as told in file <b>generalization of stack </b>
 
 <h2>STL Stack Functions </h2>
<b>stack</b> header file is used in order to implement STL functions. The function is there to add all its utility and is managed 
<h3> push(data) </h3>
This function is used to add the elements at the end of the list 
<h3> top() </h3>
This function is used to check the top most element. 
<h3> pop() </h3>
This function is used to delete the element at the front of the list.


 <h1> QUEUES </h1>
 Queue is a data structure designed to operate in FIFO (First in First out) context. In queue elements are inserted from rear end and get removed from front end operations called <b>'enqueued'</b> and <b>'dequed'</b> respectively. Queue class is container adapter. Container is an objects that hold data of same type. Queue can be created from different sequence containers.
 <h4> There are two ways to implement Queues</h4>
 
 
   1. Circular Array based 
   2. Linked List based 
   
   <b>Out of the two Circular Array based implementation is quite lengthier than the Linked List based implementation.</b>
   
   <h2>STL Queue class function</h2>
<b>queue</b> header file is used in order to implement STL functions. The function is there to add all its utility and is managed 
<h3> push(data) </h3>
This function is used to add the elements at the end of the list 
<h3> front() </h3>
This function is used to check the front element. 
<h3> pop() </h3>
This function is used to delete the element at the front of the list.

<h1> DEQUE </h1>


deque (usually pronounced like "deck") is an irregular acronym of double-ended queue. Double-ended queues are sequence containers with dynamic sizes that can be expanded or contracted on both ends (either its front or its back).

<h1>Binary Tree Data Structure</h1>
A tree whose root elements have at most 2 children(subtrees) is a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.


A Binary Tree node contains following parts.

 1. Data
 2. Pointer to left child(left subtree)
 3. Pointer to right child(right subtree)
 
 Unlike Array and Linked List, which are linear data structures, tree is hierarchical (non-linear) data structure.

One reason to use trees might be because you want to store information that naturally forms a hierarchy. <b>For example, the file system on a computer: file system</b>


     /desktop   <-- root
     
    /            \
    
  
...       
                     
                     my computer

                  /                \
      
          local (c):           local (d):
   
           /                  /      |       \
    
       ...                  prg1    prg2       prg3
  
  
<b>APPLICATIONS:</b>

 1. Store hierarchical data, like folder structure, organization structure, XML/HTML data.
 2. Binary Search Tree is a tree that allows fast search, insert, delete on a sorted data. It also allows finding closest item
 3. Syntax Tree: Used in Compilers.
 4. As a workflow for compositing digital images for visual effects.
 
 <h1>Binary Search Tree</h1>
 
 BST is also a data structure same as BinaryTree with time complexity of O(logN) most of the time(balanced tree) else may be O(N) in case if the tree is Skew tree.
 
 <b>COMPLEXITY depends upon order of depth of tree O(D)</b> during insertion, deletion, searching, etc.
 
 Elements are ordered in the the BST like the element smaller than the root ordered or inserted in the left of the root else on the right of root. This property holds for each root and for every subtrees.
 
 <h1>Heap Data Structure</h1>
 
 A Heap is a Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

<b>Max-Heap:</b> In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

<b>Min-Heap:</b> In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. The same property must be recursively true for all sub-trees in that Binary Tree.

