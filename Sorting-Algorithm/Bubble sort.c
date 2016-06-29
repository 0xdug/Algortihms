/** Bubble Sort Algorithm

*begin BubbleSort(list)
*	for all elements of list
*		if list[i] > list[i+1]
*			swap(list[i], list[i+1])
*		end if
*	end for
*	return list
*/ end BubbleSort

/* C program to sort data in ascending order */

#include<stdio.h>
int main() {
	int array[100], size, i, j, temp;
	printf("Enter the number of elements:");
	scanf("%d", &size);
	printf("Enter the elements:");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(array[i]>array[i+1]){
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);	
	}
	return 0;
}
