#include<stdio.h>          // Binary-Search code
int main() {
	int n, a;
	scanf("%d", &n);
	int arr[n];
	
	for(int i=0; i<n; i++) {  // taking the input of the array
		scanf("%d", &arr[i] );
	}
	
	int temp=0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] > arr[j] ) { // Comparing the elements of the array and sorting them
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i=0; i<n; i++) {  // printing the array
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	scanf("%d", &a);
	int x; // x is the mid value of array
	x = (n % 2 == 0) ? n/2 : (n+1)/2; // if n is even then mid is n/2 else mid is (n+1)/2
	
	for(int i = (a <= x ? 0 : x); i <= (a <= x ? x : n); i++) {
		if( a == arr[i] ) printf("%d is at %d position\n", a, i+1);
	}
	return 0;
}
	
