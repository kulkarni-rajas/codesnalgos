// Java code for linearly searching x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 

class GFG 
{ 
	int n = 0;
	int i = 0;
int search(int arr[], int x, int i) 
{ 
	if(arr[i] != x && i!=n-1) 
		search(arr,x,i+1); 
	if(arr[i] != x && i==n-1)
		return -1;		
	else 
		return i;
} 

public static void main(String args[]) 
{ 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n=arr.length;
	int result = search(arr, x, i); 
	if(result == -1) 
		System.out.print("Element is not present in array"); 
	else
		System.out.print("Element is present at index " + result); 
} 
} 
