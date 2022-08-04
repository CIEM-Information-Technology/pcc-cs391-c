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
 * @brief function to implement insertion sort
 * 
 * @param a array to be sorted 
 * @param n number of elements in the array
 */
void insertionSort(int a[],int n)
{
    int k = 1, p, temp;
    while(k <= n)
    {
        temp = a[k];
        p = k - 1;
        while(temp < a[p] && p >= 0)
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
    for(int i = k + 1; i < n; i++)
    {
        if(a[i] < small)
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
void selectionSort(int a[],int n)
{
    int loc, temp;
    for(int k = 0; k < n; k++)
    {
        loc = selectSmallestElementPos(a, k, n);
        temp = a[k];
        a[k] = a[loc];
        a[loc] = temp;
    }
}