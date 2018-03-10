#include<stdio.h>


void printArray(int A[], int length){
	int i=0;
	for(;i<length;i++){
		printf("%d\t",A[i]);
	}
}

void InsertionSort (int A[] ,int length){
	int j,p;
	int temp;
	
	printArray(A,length);
	printf("\n");

	for(p =1;p < length; p++){
		temp = A[p];
		for(j = p; j > 0 && A[j-1] > temp;j--){
			A[j] = A[j-1]; 
		}
		A[j] = temp;
	}
	printArray(A,length);
	printf("\n");
}

//插入排序
void main(){
	int A[] = {3,8,2,5,4}; 	
	InsertionSort(A,5);
}
