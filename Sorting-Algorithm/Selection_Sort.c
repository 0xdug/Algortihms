/** Selection sort
* Set min to zeroth index
* Search the minimum element in the list
* Swap with value at location min
* Increment min to point to next element
* Repeat until the list is sorted
**/

/* Program to sort array using selection sort */

#include<stdio.h>
int main() {
	int array[100], size, i, j, temp;
	printf("Enter the number of elements:");
	scanf("%d", &size);
	printf("Enter the elements:");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++) {
		for(j=i+1;j<size;j++){
			if(array[j]<array[i]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);	
	}
	return 0;
}
