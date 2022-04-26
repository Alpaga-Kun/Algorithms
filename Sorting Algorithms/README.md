<p align="center">
  <img 
    width="300"
    height="300"
    src="https://user-images.githubusercontent.com/102417356/165273721-01bca157-c51f-4bb3-8f91-f2459ea91740.gif"
  >
</p>

# Table of Contents
1. [Bubble Sort](#bubble-sort)
2. [Bucket Sort](#bucket-sort)
3. [Counting Sort](#counting-sort)
4. [Heap Sort](#heap-sort)
5. [Insertion Sort](#insertion-sort)
6. [Merge Sort](#merge-sort)
7. [Quick Sort](#quick-sort)
8. [Radix Sort](#radix-sort)
9. [Selection Sort](#selection-sort)

## Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.</br>
Example:</br>
**First Pass:**</br>
( **5 1** 4 2 8 ) –> ( **1 5** 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.</br>
( 1 **5 4** 2 8 ) –>  ( 1 **4 5** 2 8 ), Swap since 5 > 4</br>
( 1 4 **5 2** 8 ) –>  ( 1 4 **2 5** 8 ), Swap since 5 > 2</br>
( 1 4 2 **5 8** ) –> ( 1 4 2 **5 8** ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.</br>
</br>
**Second Pass:**</br>
( **1 4** 2 5 8 ) –> ( **1 4** 2 5 8 )</br>
( 1 **4 2** 5 8 ) –> ( 1 **2 4** 5 8 ), Swap since 4 > 2</br>
( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 )</br>
( 1 2 4 **5 8** ) –>  ( 1 2 4 **5 8** )</br>
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.</br>
**Third Pass:**</br>
( **1 2** 4 5 8 ) –> ( **1 2** 4 5 8 )</br>
( 1 **2 4** 5 8 ) –> ( 1 **2 4** 5 8 )</br> 
( 1 2 **4 5** 8 ) –> ( 1 2 **4 5** 8 )</br>
( 1 2 4 **5 8** ) –> ( 1 2 4 **5 8** )</br>
</br>
**Worst and Average Case Time Complexity:** O(n*n). The worst-case occurs when an array is reverse sorted.</br>
**Best Case Time Complexity:** O(n). The best-case occurs when an array is already sorted</br>
**Auxiliary Space:** O(1)</br>
**Boundary Cases:** Bubble sort takes minimum time (Order of n) when elements are already sorted.</br>
**Sorting In Place:** Yes</br>
**Stable:** Yes</br>
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. </br>
In computer graphics, it is popular for its capability to detect a very small error (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n). For example, it is used in a polygon filling algorithm, where bounding lines are sorted by their x coordinate at a specific scan line (a line parallel to x-axis) and with incrementing y their order changes (two elements are swapped) only at intersections of two lines.</br>
## Bucket Sort
some text.
## Counting Sort
some text.
## Heap Sort
some text.
## Insertion Sort
some text.
## Merge Sort
some text.
## Quick Sort
some text.
## Radix Sort
some text.
## Selection Sort
some text.
