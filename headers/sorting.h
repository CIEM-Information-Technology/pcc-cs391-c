/*
 * Function: insertionSort(int a[], int n)
 * function to sort an array with insertion sort algorithm
 * 
 * a[]: array to be sorted
 * n: number of elements in the array
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

/*
 * Function: smallestElement(inta[], int k, int[n])
 * function to find the smallest element's position in an array
 * according to selection sort
 * 
 * a[]: array to find the position of the smallest element of
 * k: position to start at
 * n: number of elements in the array
 * 
 * returns: int (position of the smallest element)
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

/*
 * Function: selectionSort(int a[], int n)
 * function to sort an array using the selection sort algorithm.
 * 
 * a[]: array to be sorted
 * n: number of elements in the array
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