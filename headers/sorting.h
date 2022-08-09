/**
 * @file sorting.h
 * @author Aurghyadip Kundu
 * @brief Header file for sorting opeartions, insertion sort, selection sort
 * merge sort and quick sort.
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * @brief function to swap two values
 *
 * @param a first value
 * @param b second value
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief function to implement insertion sort
 *
 * @param a array to be sorted
 * @param n number of elements in the array
 */
void insertionSort(int a[], int n)
{
    int k = 1, p, temp;
    while (k <= n)
    {
        temp = a[k];
        p = k - 1;
        while (temp < a[p] && p >= 0)
        {
            a[p + 1] = a[p];
            p = p - 1;
        }
        a[p + 1] = temp;
        k++;
    }
}

/**
 * @brief function to find the smallest element's position in an array
 * according to selection sort
 *
 * @param a array to be searched
 * @param k position to start searching from
 * @param n size of the array
 * @return int the position of the smallest element after a[k]
 */
int selectSmallestElementPos(int a[], int k, int n)
{
    int pos = k, small;
    small = a[pos];
    for (int i = k + 1; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            pos = i;
        }
    }
    return pos;
}

/**
 * @brief Function to implement selection sort
 *
 * @param a array to sort
 * @param n number of elements
 */
void selectionSort(int a[], int n)
{
    int loc, temp;
    for (int k = 0; k < n; k++)
    {
        loc = selectSmallestElementPos(a, k, n);
        temp = a[k];
        a[k] = a[loc];
        a[loc] = temp;
    }
}

/**
 * @brief Merge function for mergeSort()
 *
 * @param arr array to be split and merged
 * @param l left value
 * @param m mid value
 * @param r right value
 */
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/**
 * @brief function implementing merge sort algorithm
 *
 * @param arr array to be sorted
 * @param l left variable
 * @param r right variable
 */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/**
 * @brief Function to heapify a subtree rooted with node i
 *
 * @param a array to be heapified
 * @param n size of the heap
 * @param i index of a
 */
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
    {
        largest = left;
    }
    if (right < n && a[right] > a[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}

/**
 * @brief function for implementing heapsort
 *
 * @param a array to be sorted
 * @param n size of the array
 */
void heapSort(int a[], int n)
{
    /* building max heap */
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    /* heap sort */
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        heapify(a, i, 0); /* get highest element at the root again */
    }
}

/**
 * @brief This function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot
 *
 * @param arr array to be partitioned
 * @param low starting index
 * @param high ending index
 * @return int (pivot)
 */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/**
 * @brief function to implement quicksort
 *
 * @param arr array to be sorted
 * @param low Starting index
 * @param high Ending index
 */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}