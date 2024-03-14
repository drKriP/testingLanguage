#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid;
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    }
    return 0; 
} 
void main() 
{ 
    int arr[5] = { 2, 3, 6, 10, 60 }; 
    int result,x,n = 5;
    printf("Enter the item you want to search : ");
    scanf("%d",&x);
    result = binarySearch(arr, 0, n - 1, x);
    	if(result == 0)
		printf("Not found\n");
	else
		printf("Found\n");
}
		
		
