#include<stdio.h>
/*To implement Binary search on an array*/
int BinarySearch(int arr[],int Left,int Right,int Target);

int main(){
    int arr[]={12,13,14,15,16,17,18,19,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Target;
    printf("Enter the Target element\n");
    scanf("%d", &Target);
    int Answer=BinarySearch(arr,0,n-1,Target);
    if(Answer!=-1){
        printf("Element %d found at index %d", Target, Answer);
    }
    else{
        printf("Element %d not found in the given array", Target);
    }
    return 0;
}

int BinarySearch(int arr[],int Left,int Right,int Target){
    while(Left<=Right){
        int Mid = Left+(Right-Left)/2;
        if(arr[Mid]==Target){
            return Mid;
        }
        if(arr[Mid]<Target){
            Left=Mid+1;
        }
        else{
            Right=Mid-1;
        }
    }
    return -1;
}
