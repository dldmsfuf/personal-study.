#include <stdio.h>
void selection_sort(int a[], int size) {
	int i,j,minidx, temp;
	for(i=0;i<size;i++) {
		minidx=i;
		for(j=i+1;j<size;j++) {
			if(a[minidx] > a[j]) minidx = j;
		}
		temp=a[minidx]; a[minidx]=a[i]; a[i]=temp;
	}
}
int main() {
	int arr[] = {9,1,22,4,0,-1,1,22,100,10};
	int size = sizeof(arr)/sizeof(int);
	selection_sort(arr, size);
	for(int i=0;i<size;i++)  printf("%d",arr[i]);
}