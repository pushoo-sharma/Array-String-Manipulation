/*
----------------------------------------------------------------------Insertion sort-----------------------------------------------------
Time Complexity: O(n*n)
Auxiliary Space: O(1)
Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
 And it takes minimum time (Order of n) when elements are already sorted.
Algorithmic Paradigm: Incremental Approach
Sorting In Place: Yes
Stable: Yes
Online: Yes
Uses: Insertion sort is used when number of elements is small.
 It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.
 
 
 Another Example: 
12, 11, 13, 5, 6
Let us loop for i = 1 (second element of the array) to 5 (Size of input array)
i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12
11, 12, 13, 5, 6
i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13
11, 12, 13, 5, 6
i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position.
5, 11, 12, 13, 6
i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position.
5, 6, 11, 12, 13
*/
#include <iostream>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" \n";
	}
}
void insert(int a[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key = a[i];
		j= i - 1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
 
}
int main() {
	// your code goes here
	int a[]={12, 11, 13, 5, 6};
	int n = sizeof(a)/sizeof(a[0]);
	insert(a,n);
	print(a,n);
	return 0;
}
