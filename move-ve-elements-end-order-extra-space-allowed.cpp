/*
----------------------------------------------------------------Question-------------------------------------------------------
Move all negative elements to end in order with extra space allowed
Given an unsorted array of both negative and positive integer. The task is place all negative element at the end of array
without changing the order of positive element and negative element.

Examples:

Input : arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 1  3  2  11  6  -1  -7  -5 

Input : arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output : 7  9  10  11  -5  -3  -4  -1  
--------------------------------------------------------------Solution---------------------------------------------------------
                                                              
															  solution 1.
The problem becomes easier if we are allowed to use extra space. Idea is create an empty array (temp[]). First we store all
positive element of given array and then we store all negative element of array in Temp[]. Finally we copy temp[] to original array.
                                                         Time Complexity : O(n)
                                                         Auxiliary space : O(n)
	for reference on memcpy :- http://en.cppreference.com/w/cpp/string/byte/memcpy													 
														 
*/
#include <bits/stdc++.h>
using namespace std;
void check(int arr[],int n){
	int temp[n];
	int j=0;
	for(int i =0;i<n;i++){
		if(arr[i]>=0)
		temp[j++]=arr[i];
	}
	if(j==n || j==0)
	return;
	for(int i=0;i<n;i++){
		if(arr[i]<0)
		temp[j++]=arr[i];
	}
	memcpy(arr,temp,sizeof(temp));   // referenece above
}
int main() {
	// your code goes here
	int a[]={1 ,-1 ,-3 , -2, 7, 5, 11, 6};
	int n=sizeof(a)/sizeof(a[0]);
	check(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" \n";
	}
	return 0;
}