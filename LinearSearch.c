#include<stdio.h>
/*To implement linear search on an array given by the user*/
int LinearSearch(int arr[], int n, int Target);

int main(){
    int n,Target;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Element of the array are\n");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the target element\n");
    scanf("%d", &Target);
    int Answer=LinearSearch(arr,n,Target);
    if(Answer!=-1){
        printf("Target element %d found at index %d", Target, Answer);
    }
    else{
        printf("Element %d not found in the given array", Target);
    }
    return 0;
}

int LinearSearch(int arr[], int n, int Target){
    for(int i=0;i<n;i++){
        if(arr[i]==Target){
            return i;
        }
    }
    return -1;
}
