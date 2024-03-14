#include <stdio.h> 
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    {
	    if (arr[i] == x) 
        	return i;
	}
    return 0; 
} 
  
void main() 
{ 
    int arr[5] = { 23, 3, 43, 30, 40 };
    int x,result; 
    int n = 5;
    printf("Enter the item you want to search : ");
    scanf("%d",&x);
    result = search(arr, n, x);
	if(result == 0)
		printf("Not found\n");
	else
		printf("Found\n");
}
