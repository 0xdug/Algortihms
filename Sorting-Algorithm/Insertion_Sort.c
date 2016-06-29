/** Program to sort elements using Insertion Sort */

#include<stdio.h>
int main() {
  int array[100], size, i, j, temp;
	printf("Enter the number of elements:");
	scanf("%d", &size);
	printf("Enter the elements:");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	for(i=1;i<size;i++) {
	  temp=array[i];
	  j=i-1;
	  while(j>=0 && temp<array[j]) {
	    array[j+1]=array[j];
	    j=j-1;
	    }
	    array[j+1]=temp;
	    }
	    return 0;
	    }
