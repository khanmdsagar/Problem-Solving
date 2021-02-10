#include <stdio.h>

int linear_search(int a[], int n, int x);

int main() {
    
    int arr[8] = {1,34,56,34,65,67,60,40};

    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    
    int result = linear_search(arr, n, x);
    
    (result == -1) 
        ?printf("Element not found\n")
        :printf("Element found at %d\n", result);
    
    return 0;
}


int linear_search(int a[], int n, int x){
    
    int i;
    
    for(i = 0; i<n; i++)
        if(a[i] == x)
            //break;
            return 1;
    return -1;
            
    // if (i<n)
    //     printf("Element found\n");
    // else
    //     printf("Element not found!");
}