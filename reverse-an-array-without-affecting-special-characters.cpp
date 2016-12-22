/*
-----------------------------------------------------------------------Question-----------------------------------------------------
Reverse an array without affecting special characters
Given a string, that contains special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.

Examples:

Input:   str = "a,b$c"
Output:  str = "c,b$a"
Note that $ and , are not moved anywhere.  
Only subsequence "abc" is reversed

Input:   str = "Ab,c,de!$"
Output:  str = "ed,c,bA!$"
----------------------------------------------------------------------Solution--------------------------------------------------------
Time complexity of above solution is O(n), but it requires extra space and it does two traversals of input string.
We can reverse with one traversal and without extra space. Below is algorithm.

1) Let input string be 'str[]' and length of string be 'n'
2) l = 0, r = n-1
3) While l is smaller than r, do following
    a) If str[l] is not an alphabetic character, do l++
    b) Else If str[r] is not an alphabetic character, do r--
    c) Else swap str[l] and str[r]
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isAlphabet(char a){
	//cout<<a<<"\n";
 
	return((a>='A' && a<='Z') || (a>= 'a'&& a<='z' ));   // note:- wrong if 'a'>='A' vvimp
 
}
void reverse(char s[]){                                 //great approach
	int n=strlen(s)-1;                                  //will entre in else after all correction being done
	//cout<<n<<"\n";
	int start=0,last=n;
	while(start<last){
		if(!isAlphabet(s[start]))
		start++;
		else if (!isAlphabet(s[last]))
		last--;
		else
		{
			swap(s[start],s[last]);
			start++;
			last--;
		}
 
	}
 
}
int main() {
	// your code goes here
	char s[10001];
	cout<<" Entre the string "<<"\n";
	cin>>s;
	reverse(s);
	cout<<s<<"\n";
	return 0;
}