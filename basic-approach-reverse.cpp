/*--------------------------------------------------------------------BASIC REVERSE PROBLEM---------------------------------------------------------------*/
#include <iostream>
using namespace std;
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
 
}	
 
void reverseString(int a[],int n){
	int temp;
	int start=0,end=n-1;
	while(end>=start){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		end--;
		start++;
	}
	printArray(a,n);
}
 
int main() {
	// your code goes here
	int a[]={1,2,3,6,8};
	int n= sizeof(a)/sizeof(a[0]);
	reverseString(a,n);
 
	return 0;
}