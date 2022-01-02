//  Program to find element in array using binary search. 
// full of bugs

#include<stdio.h>





// function for bubble-sorting
void bubbleSort(int arr[], int n)
{
  int i, j, swap;
 
  for (i = 0 ; i <  n - 1 ; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j+1])
      {
        swap = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = swap;
      }
    }
  }
  return;
}
















// main function starts here






int main()
{
	int arr[100],x,n;
  int flag=0,first,last,i,mid;
  
	printf("Enter array size: ");
	scanf("%d",&n);
  
	printf("Enter elements of array : ");		
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
  
  
/* because binary search works when array is sorted hence array is sorted here firstly */
	bubbleSort(arr,n);
	printf("Sorted array is : ");
	for(i=0;i<n;i++) printf(" %d",arr[i]);
  
  
	printf("\nEnter element you want to find : ");                      
	scanf("%d",&x);


	first=0,last=n-1;
	
	while(first<=last){
               //s1: we take arr[mid] in each iteration and compare it with x	
		mid=(first + last)/2;
		if(x==arr[mid]){
			flag=1;
			break;
              // s2: here if x == arr[mid]  and we got x in the array, and get out of the loop
		}
		else if (x>arr[mid]){
			first=mid+1; // s3: here if x > arr[mid]  and we search x rightside of mid 
		}
		else{
		 	last=mid-1;  // s4: here if x < arr[mid]  and we search x leftside of mid 
		 }
	} // loop ends
  
 
	if(flag==1) printf("\nelement is found at position %d in the sorted array.",mid+1);
  else        printf("element not found");
	  
	  return 0;
}
