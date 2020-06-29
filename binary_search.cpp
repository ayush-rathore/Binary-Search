#include <iostream>         // Binary-Search code
#include <vector>
using namespace std;

int search(vector<int> A, int key) {        //Function for binary search
	int mid, i=0, high=A.size();
	while(i <= high) {
		mid = i + (high - i)/2;
		if(key == A[mid]) {
			return mid;
		}
		else if(key < A[mid]) high = mid - 1;
		else i = mid + 1;
	}
	return i-1;                // Printng -1 if the key is not found
}
	
int main() {
	int size;
	cin >> size;
	vector<int> A(size);
	
	for(int i=0; i<A.size(); i++) {  // Taking the input of the array
		cin >> A[i];
	}
	
	int temp=0;
	for(int i=0; i<A.size(); i++) {
		for(int j=i+1; j<A.size(); j++) {
			if(A[i] > A[j] ) { // Comparing the elements of the array and sorting them
				temp = A[j];
				A[j] = A[i];
				A[i] = temp;
			}
		}
	}
	cout << "Sorted Array:" << "\n";    // Printing the sorted array.
	for(int i=0; i<A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << "\n";
	int key;
	cin >> key; // Taking input for the key to be found
	cout << key << " is present at " << search(A, key)+1 << " index of the sorted array." << "\n"; // Printing the key and its index
	return 0;
}
	
