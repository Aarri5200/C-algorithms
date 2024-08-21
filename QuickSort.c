#include<stdio.h>

void quicksort(int arr[], int first, int last)
{
    if(first<last)
    {
        int pivot = first, i=first+1, j=last, temp;
        while(i<=j)
        {
            i=first+1; j=last;
            while(arr[i]<arr[pivot] && i<=last)
            {
                i++;
            }
            while(arr[j]>arr[pivot])
            {
                j--;
            }
            if (i<=j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;

        quicksort(arr, first, j-1);
        quicksort(arr, j+1, last);
    }
    
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n-1);

    printf("Sorted array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
