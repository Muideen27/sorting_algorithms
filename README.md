# 0x1B. C - Sorting algorithms & Big O Readme.md file

![Big-O Complexity](https://user-images.githubusercontent.com/113618032/219960382-80a0586d-c919-4382-bca9-9a8771519efe.png)

----
### C
### Algorithm
### Data structure
----
By: Alexandre Gautier

Project will start Feb 15, 2023 5:00 AM, must end by Feb 22, 2023 5:00 AM
----
# Resources 📚
Read or watch:

* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://intranet.alxswe.com/rltoken/_I0aEvhfJ66Xyob6dd9Utw) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
* [CS50 Algorithms explanation in detail by David Malan](https://intranet.alxswe.com/rltoken/Ea93HeEYuNkOL7sGb6zzGg)
* [All about sorting algorithms](https://intranet.alxswe.com/rltoken/21X_eaj5RGcLIL9mZv2sqw)

# General Learning Objectives 💡

* _At least four different sorting algorithms_
* _What is the Big O notation, and how to evaluate the time complexity of an algorithm_
* _How to select the best sorting algorithm for a given input_
* _What is a stable sorting algorithm_

## Mandatory Tasks
### ☑️ **0. Bubble sort**
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

* Prototype: `void bubble_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `0-bubble_sort.c`, `0-O`                                                                                                                                       
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble`

### ☑️ **1. Insertion sort**
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

* Prototype: `void insertion_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `1-insertion_sort_list.c,` `1-O`                                                                                                                               
Compiled: `gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion`

### ☑️ **2. Selection sort**
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

* Prototype: `void selection_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `2-selection_sort.c` `2-O`                                                                                                                                     
Compiled: `gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select`

### ☑️ **3. Quick sort**
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: `void quick_sort(int *array, size_t size);`
* You must implement the `Lomuto` partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `3-quick_sort.c` `3-O`                                                                                                                                         
Compiled: `gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick`

## Advanced Tasks
### ☑️ **4. Shell sort - Knuth Sequence**
Write a function that sorts an array of integers in ascending order using the [Shell sort](https://en.wikipedia.org/wiki/Shellsort) algorithm, using the `Knuth sequence`

* Prototype: `void shell_sort(int *array, size_t size);`
* You must use the following sequence of intervals (a.k.a the Knuth sequence):
      `n + 1 = n * 3 + 1`
       1, 4, 13, 40, 121, ...
* You’re expected to print the array each time you decrease the interval

No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap

File(s): `100-shell_sort.c`                                                                                                                                             
Compiled: `gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-shell_sort.c print_array.c -o shell`

### ☑️ **5. Cocktail shaker sort**
Write a function that sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm

* Prototype: `void cocktail_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements

Write in the file `101-O`, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `101-cocktail_sort_list.c` `101-O`                                                                                                                             
Compiled: `gcc -Wall -Wextra -Werror -pedantic 101-main.c 101-cocktail_sort_list.c print_list.c -o cocktail`

### ☑️ **6. Counting sort**
Write a function that sorts an array of integers in ascending order using the Counting sort algorithm

* Prototype: `void counting_sort(int *array, size_t size);`
* You can assume that `array` will contain only numbers >= 0
* You are allowed to use `malloc` and `free` for this task
* You're expected to print your counting array once it is set up
* This array is of size `k + 1` where `k` is the largest number in `array`

Write in the file 102-O, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `102-counting_sort.c` `102-O`                                                                                                                               
Compiled: `gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-counting_sort.c print_array.c -o counting`

### ☑️ **7. Merge sort**
Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

* Prototype: `void merge_sort(int *array, size_t size);`
* You must implement the top-down merge sort algorithm
    - When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` -> `{1, 2}, {3, 4, 5}`
    - Sort the left array before the right array
* You are allowed to use `printf`
* You are allowed to use `malloc` and `free` only once (only one call)

Write in the file `103-O`, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `103-merge_sort.c` `103-O`                                                                                                                                     
Compiled: `gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-merge_sort.c print_array.c -o merge`

### ☑️ **8. Heap sort**
Write a function that sorts an array of integers in ascending order using the Heap sort algorithm

* Prototype: `void heap_sort(int *array, size_t size);`
* You must implement the sift-down heap sort algorithm
* You’re expected to print the `array` after each time you swap two elements

Write in the file `104-O`, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `104-heap_sort.c` `104-O`                                                                                                                                     
Compiled: `gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-heap_sort.c print_array.c -o heap`

### ☑️ **9. Radix sort**
Write a function that sorts an array of integers in ascending order using the Radix sort algorithm

* Prototype: `void radix_sort(int *array, size_t size);`
* You must implement the LSD radix sort algorithm
* You can assume that array will contain only numbers >= 0
* You are allowed to use `malloc` and `free` for this task
* You’re expected to print the `array` each time you increase your significant digit

File(s): `105-radix_sort.c`                                                                                                                                             
Compiled: `gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-radix_sort.c print_array.c -o radix`

### ☑️ **10. Bitonic sort**
Write a function that sorts an array of integers in ascending order using the Bitonic sort algorithm

* Prototype: `void bitonic_sort(int *array, size_t size);`
* You can assume that `size` will be equal to`2^k`, where `k >= 0` (when array is not `NULL` …)
* You are allowed to use `printf`
* You’re expected to print the `array` each time you swap two elements

Write in the file `106-O`, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `106-bitonic_sort.c` `106-O`                                                                                                                                 
Compiled: `gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-bitonic_sort.c print_array.c -o bitonic`

### ☑️ **11. Quick Sort - Hoare Partition scheme**
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: `void quick_sort_hoare(int *array, size_t size);`
* You must implement the Hoare partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements

Write in the file `107-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

File(s): `107-quick_sort_hoare.c` `107-O`                                                                                                                               
Compiled: `gcc -Wall -Wextra -Werror -pedantic 107-main.c 107-quick_sort_hoare.c print_array.c -o quick`

### ☑️ **12. Dealer**
Write a function that sorts a deck of cards.

* Prototype: void sort_deck(deck_node_t **deck);
* You are allowed to use the C standard library function qsort
* You have to push your deck.h header file
* Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
* You can assume there is exactly 52 elements in the doubly linked list.
    - You are free to use the sorting algorithm of your choice
    - The deck must be ordered:

From Ace to King
From Spades to Diamonds

File(s): `1000-sort_deck.c` `deck.h`                                                                                                                                   
Compiled: `gcc -Wall -Wextra -Werror -pedantic 1000-main.c 1000-sort_deck.c -o deck`

## Author: 
#### Ilori Muideen Adeleye
#### Oluwaseun Taiwo
