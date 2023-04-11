0. a function that searches for a value in an array of integers using the Linear search algorithm
1.  a function that searches for a value in a sorted array of integers using the Binary search algorithm
2. What is the time complexity (worst case) of a linear search in an array of size n?
3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

Repo:
4. What is the time complexity (worst case) of a binary search in an array of size n?
5. What is the space complexity (worst case) of a binary search in an array of size n?
6. What is the space complexity of this function / algorithm?
7. a function that searches for a value in a sorted array of integers using the Jump search algorithm
8. What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
9. a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
10. a function that searches for a value in a sorted array of integers using the Exponential search algorithm
11. You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.
12. You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.

Please define the following data structure in your search_algos.h header file:
13. As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).

Please define the following data structure in your search_algos.h header file:
14. What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
15. What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
