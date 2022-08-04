/*
 * C program to sort an array, insert an element into array, and
 * delete an element from an array using index.
 */
#include<stdio.h>

/*
 * Function: insert
 * inserts an element into the array provided
 * a[]: array to be opearted on
 */
void insert(int a[], int *n)
{
    int p, i, k;
    printf("Enter the position\n");
    scanf("%d", &p);
    printf("Enter the element to be entered\n");
    scanf("%d", &k);
    i = *n - 1;
    while(i >= p)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[p] = k;
    *n = *n + 1;
    printf("After insertion:");
    for(i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/*
 * Function: del
 * deletes an element from an array based on index
 * a[]: array to be opearted on
 */
void del(int a[], int *n)
{
    int i, p, k;
    printf("\nEnter the index to be deleted\n");
    scanf("%d", &p);
    i = p;
    k = a[p];
    while(i < *n - 1)
    {
        a[i] = a[i + 1];
        i++;
    }
    *n = *n - 1;
    printf("After deletion\n");
    for(i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int i, j, temp; /* temp variables */
    int n; /* number of elements in the array */
    
    printf("Enter no. of elements\n");
    scanf("%d", &n);
    
    int a[n]; /* declaring an array of size n */

    printf("Enter the elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // Bubble sort
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("After sort\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    insert(a, &n);
    del(a, &n);
    
    return 0;
}