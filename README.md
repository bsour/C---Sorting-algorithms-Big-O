# C - Sorting Algorithms & Big - O

### Description
* This project provides implementations of various sorting algorithms in C programming language. The algorithms included are Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. It also includes functions for printing arrays and doubly linked lists.

## Functions and Algorithms
```
void bubble_sort(int *array, size_t size);
** : Sorts an array of integers using the Bubble Sort algorithm.
```
```
void insertion_sort_list(listint_t **list);
** : Sorts a doubly linked list of integers using the Insertion Sort algorithm.
```
```
void selection_sort(int *array, size_t size);
** : Sorts an array of integers using the Selection Sort algorithm.
```
```
void quick_sort(int *array, size_t size);
**: Sorts an array of integers using the Quick Sort algorithm.
```
## Usage
* Include the necessary header file in your C program:

```
#include "sort.h"
```
```
Call the desired sorting function with the appropriate parameters.
```
```
Compile your program along with the sorting algorithm implementation and the required functions:
gcc your_program.c sort.c print_array.c print_list.c -o your_program
```
- Note: Replace your_program.c with the name of your C program file.

```
Run the compiled program:
./your_program
```


## Time Complexity Analysis
* The time complexity of the sorting algorithms in different scenarios is as follows:

+ Bubble Sort:

```
Best case: O(n)
Average case: O(n^2)
Worst case: O(n^2)
```

+ Insertion Sort:
```
Best case: O(n)
Average case: O(n^2)
Worst case: O(n^2)
```

+ Selection Sort:
```
Best case: O(n^2)
Average case: O(n^2)
Worst case: O(n^2)
```

+ Quick Sort:
```
Best case: O(n log n)
Average case: O(n log n)
Worst case: O(n^2)
```
### Note: The time complexities mentioned above are for reference purposes and may vary depending on the implementation details.

## Authors

- [Sourabh](https://github.com/bsour)
- [Eva](https://github.com/EvaMicich)


