# C - Search Algorithms

The objectives of this project are:

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Compilation
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source files> [-lm] -o <exec>
```

## Utilities

* [listint](./listint): contains helper functions for task [12](./105-jump_list.c).

* [skiplist](./skiplist): contains helper functions for task [13](./106-linear_skip.c).


### Data Structures
```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

## Tasks

* **0. Linear search**
  * [0-linear.c](./0-linear.c): searches for a value in an array
  of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): searches for a value in a sorted
  array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* **2. Big O #0**
  * [2-O](./2-O): worst case time complexity of linear search.

* **3. Big O #1**
  * [3-O](./3-O): worst case space complexity of iterative linear search.

* **4. Big O #2**
  * [4-O](./4-O): worst case case time complexity of binary search.

* **5. Big O #3**
  * [5-O](./5-O): worst case space complexity of binary search.

* **6. Big O #4**
  * [6-O](./6-O): space complexity of the following function/algorithm:

```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

* **7. Jump search**
  * [100-jump.c](./100-jump.c): searches for a value in a
  sorted array of integers using jump search.
  * Uses the square root of the size of the array as the jump step.
  * Assumes the array is sorted in ascending order and that the value to search
  for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* **8. Big O #5**
  * [101-O](./101-O): average case time complexity of jump search in an array of size `n` using `step = sqrt(n)`.

* **9. Interpolation search**
  * [102-interpolation.c](./102-interpolation.c): searches for
  a value in a sorted array of integers using interpolation search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **10. Exponential search**
  * [103-exponential.c](./103-exponential.c): searches for a
  value in a sorted array of integers using exponential search.
  * Uses powers of 2 as exponential ranges to search the array.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **11. Advanced binary search**
  * [104-advanced_binary.c](./104-advanced_binary.c): searches
  for a value in a sorted array of integers using advanced binary search.
  * Assumes the array is sorted in ascending order.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **12. Jump search in a singly linked list**
  * [105-jump_list.c](./105-jump_list.c): searches for a value
  in a `listint_t` sorted singly linked list of integers using jump search.
  * Uses the square root of the list size as the jump step.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

* **13. Linear search in a skip list**
  * [106-linear_skip.c](./106-linear_skip.c): searches for a value
  in a `skiplist_t` sorted skipped linked list of integers using jump search.
  * Assumes that the singly linked list is sorted in ascending order.
	* If the value is not present or the head of the list is `NULL`, returns `NULL`.
	* Otherwise, returns a pointer to the first node where `value` is located.

* **14. Big O #6**
  * [107-O](./107-O): average time complexity of jump
  search in a singly linked list of size `n`, using `step = sqrt(n)`.

* **15. Big O #7**
  * [108-O](./108-O): Text file containing the average time complexity of jump
  search in a sorted skipped linked list of of size `n`, using `step = sqrt(n)`.
